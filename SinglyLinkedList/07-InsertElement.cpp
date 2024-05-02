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
        next = nullptr;
    }
};
class LinkedList
{
public:
    Node *head = nullptr;
    void insert(int index, int value)
    {
        Node *t, *p;
        if (index < 0)
        {
            return;
        }
        t = new Node(value);
        if (index == 0)
        {
            t->next = head;
            head = t;
            p = head;
        }
        else
        {
            for (int i = 0; i < index - 1; i++)
            {
                p = p->next;
            }
            t->next = p->next;
            p->next = t;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
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
    list.insert(0, 10);
    list.insert(1, 4);
    list.insert(2, 3);
    list.display();
}