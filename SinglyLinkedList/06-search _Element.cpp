#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = next;
    }
};
class LinkedList
{
public:
    Node *head = nullptr;
    void create(int A[], int size)
    {
        head = new Node(A[0]);
        Node *temp = head;
        for (int i = 1; i < size; i++)
        {
            Node *newNode = new Node(A[i]);
            temp->next = newNode;
            temp = newNode;
        }
    }
    void display()
    {
        Node *d = head;
        while (d != NULL)
        {
            cout << d->data << " ";
            d = d->next;
        }
        cout << endl;
    }
    // function to search an element of the node....
    int search_Element(int num)
    {
        Node *s = head;
        while (s != NULL)
        {
            if (s->data == num)
            {
                return true;
            }
            s = s->next;
        }
        return false;
    }
    // destructor to delete the node...
    ~LinkedList()
    {
        Node *current = head;
        while (current != NULL)
        {
            Node *next = current->next;
            delete current;
            current = next;
        }
    }
};
int main()
{
    int A[] = {2, 3, 4, 6, 7, 8};
    LinkedList list;
    list.create(A, 6);
    list.display();
    int result = list.search_Element(7);
    cout << result << endl;
}