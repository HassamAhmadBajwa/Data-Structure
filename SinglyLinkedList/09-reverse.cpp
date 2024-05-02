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
        this->next = NULL;
    }
};
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    };
    LinkedList(int A[], int size);
    ~LinkedList();
    void Reverse();
    void display();
};
LinkedList::LinkedList(int A[], int size)
{
    Node *p, *newNode;
    head = new Node(A[0]);
    p = head;
    for (int i = 1; i < size; i++)
    {
        newNode = new Node(A[i]);
        p->next = newNode;
        p = p->next;
    }
}
void LinkedList::display()
{
    Node *p = head;
    while (p != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
LinkedList::~LinkedList()
{
    Node *p, *current;
    p = head;
    current = head;
    while (p != nullptr)
    {
        p = p->next;
        delete current;
        current = p;
    }
    cout << "linked list deleted" << endl;
}
void LinkedList::Reverse()
{
    Node *q = NULL;
    Node *r = NULL;
    Node *p = head;
    while (p != nullptr)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    LinkedList list(A, 5);
    list.Reverse();
    list.display();
}