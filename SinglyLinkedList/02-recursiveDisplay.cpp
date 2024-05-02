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
    Node *last, *temp;
    void create(int A[], int size)
    {
        head = new Node(A[0]);
        last = head;
        for (int i = 1; i < size; i++)
        {
            temp = new Node(A[i]);
            last->next = temp;
            last = temp;
        }
    }
    void RecursiveDisplay(Node *p)
    {
        if (p != NULL)
        {
            cout << p->data << " ";
            RecursiveDisplay(p->next);
        }
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
    list.RecursiveDisplay(list.head);
}