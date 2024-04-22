#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next = nullptr;
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
    void display()
    {
        int count = 0;
        Node *p = head;
        while (p != nullptr)
        {
            count++;
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
        cout << "Total Nodes are: " << count << endl;
    }
};
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    LinkedList list;
    list.create(A, 5);
    list.display();
}