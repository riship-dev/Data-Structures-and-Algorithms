#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int value)
        {
            data = value;
            next = nullptr;
        }
};
class LinkedList
{
    private:
        Node *head;
        Node *last;
    public:
        LinkedList()
        {
            head = last = nullptr;
        }
        ~LinkedList()
        {
            Node *nextNode = nullptr, *current = head;
            while(current)
            {
                nextNode = current->next;
                delete current;
                current = nextNode;
            }
            head = last = nullptr;
        }
        void insertAtEnd(int value)
        {
            Node *temporary = new Node(value);
            if(head == nullptr)
            {
                head = last = temporary;
                return;
            }
            last->next = temporary;
            last = temporary;
        }
        void display()
        {
            Node *current = head;
            while(current)
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
};

int main()
{
    LinkedList list1;
    for(int i = 1; i <= 5; i++)
        list1.insertAtEnd(i);
    list1.display();
}