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
            Node *nextNode, *current = head;
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
        void removeDuplicate()
        {
            Node *current = head;
            while(current->next)
            {
                if(current->data == current->next->data)
                {
                    Node *temporary = current->next;
                    current->next = current->next->next;
                    delete temporary;
                }
                else current = current->next;
            }
        }
};

int main()
{
    LinkedList list1, list2, list3;
    list1.create({1, 2, 3, 3, 3, 4, 5});
    list1.display();
    list1.removeDuplicate();
    list1.display();
}