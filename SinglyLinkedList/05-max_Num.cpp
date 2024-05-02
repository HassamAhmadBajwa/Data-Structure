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
        this->next = nullptr;
    }
};
class LinkedList
{
public:
    Node *head = nullptr;
    Node *temp, *newNode;
    void create(int A[], int size)
    {
        head = new Node(A[0]);
        temp = head;
        for (int i = 1; i < size; i++)
        {
            newNode = new Node(A[i]);
            temp->next = newNode;
            temp = newNode;
        }
    }
    void max()
    {
        Node *t = head;
        int max = -32678;
        while (t != nullptr)
        {
            if (t->data > max)
            {
                max = t->data;
                t = t->next;
            }
            else
            {
                t = t->next;
            }
        }
        cout << max << endl;
    }
    void display()
    {
        Node *p = head;
        while (p != 0)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
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
    int A[] = {1, 2, 3, 4, 5};
    LinkedList list;
    list.create(A, 5);
    list.display();
    list.max();
}