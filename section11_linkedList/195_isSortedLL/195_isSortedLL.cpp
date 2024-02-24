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
        bool isSorted()
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                if (current->data <= current->next->data) 
                    current = current->next;
                else return false;
            }
            return true;
        }
        
};

int main()
{
    LinkedList list1, list2, list3;
    list1.create({1, 2, 3, 4, 5});
    list2.create({1, 2, 3, 5, 4});
    list3.create({101});
    
    list1.display();
    list2.display();
    list3.display();
    
    cout << list1.isSorted() << endl;
    cout << list2.isSorted() << endl;
    cout << list3.isSorted() << endl;
    //list1.isSorted() ? cout << "Y" : cout << "N";
}