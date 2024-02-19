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
            Node *nextNode;
            Node *current = head;
            while(current != nullptr)
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
        int count()
        {
            int count = 0; 
            Node *current = head;
            while(current)
            {
                count++;
                current = current->next;
            }
            return count;
        }
        void insert(int value, int index)
        {
            if(index < 0 || index > count()) return;
            Node *temporary = new Node(value);
            if(index == 0)
            {
                temporary->next = head;
                head = temporary;
            }
            else if(index > 0)
            {
                Node *current = head;
                for(int i = 0; i < index - 1; i++) 
                    current = current->next;
                temporary->next = current->next;
                current->next = temporary;
            }
        }
};

int main()
{
    LinkedList list1;
    vector<int> values = {1, 2, 3, 4, 5};
    list1.create(values);
    list1.display();
    
    list1.insert(104, 5);
    list1.display();
    
    list1.insert(101, 0);
    list1.display();
    
    list1.insert(102, 3);
    list1.display();
    
    list1.insert(103, 25);
    list1.display();
}