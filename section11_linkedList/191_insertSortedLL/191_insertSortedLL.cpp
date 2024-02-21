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
    public:
        LinkedList()
        {
            head = nullptr;
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
            head = nullptr;
        }
        void create(vector<int> values)
        {
            head = new Node(values[0]);
            Node *current = head;
            for(int i = 1; i < values.size(); i++)
            {
                current->next = new Node(values[i]);
                current = current->next;
            }
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
        void insertInSorted(int value)
        {
            Node *temporary = new Node(value);
            if(head == nullptr || value < head->data) 
            {
                temporary->next = head;
                head = temporary;
                return;
            }
            Node *current = head;
            while(current->next != nullptr && value > current->next->data)
                current = current->next;
            temporary->next = current->next;
            current->next = temporary;
        }
};

int main()
{
    LinkedList list1;
    list1.create({1, 2, 4, 5, 6});
    list1.insertInSorted(3);
    list1.display();
}