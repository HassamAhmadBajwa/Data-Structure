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
    int Sum()
    {
        int sum = 0;
        Node *p = head;
        while (p != 0)
        {
            sum = sum + p->data;
            p = p->next;
        }
        return sum;
    }
};
int main()
{
    int A[] = {2, 4, 6, 8, 10};
    LinkedList list;
    list.create(A, 5);
    int sum = list.Sum();
    cout << "Total sum is : " << sum << endl;
}