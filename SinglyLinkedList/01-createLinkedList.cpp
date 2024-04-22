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
    Node *first = NULL;
    void create(int A[], int size)
    {
        Node *temp, *last;
        first = new Node(A[0]);
        last = first;
        for (int i = 1; i < size; i++)
        {
            temp = new Node(A[i]);
            last->next = temp;
            last = temp;
        }
    }
    void display()
    {

        Node *p = first;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
};

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    LinkedList list;
    list.create(A, 5);
    list.display();
}