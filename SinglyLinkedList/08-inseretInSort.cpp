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
    Node *last = nullptr;
    void insert(int value)
    {
        Node *t, *p;
        t = new Node(value);
        if (head == nullptr)
        {
            head = t;
            last = t;
        }
        else
        {
            last->next = t;
            last = t;
        }
    }
    void insertSort(int value)
    {

        Node *p = head;
        Node *q = nullptr;
        while (p && p->data < value)
        {
            q = p;
            p = p->next;
        }
        Node *t = new Node(value);
        t->next = q->next;
        q->next = t;
    }
    void display()
    {
        Node *p;
        p = head;
        while (p != nullptr)
        {
            cout << p->data << " ";
            p = p->next;
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
    LinkedList list;
    list.insert(1);
    list.insert(3);
    list.insert(4);

    list.insertSort(2);
    list.display();
}