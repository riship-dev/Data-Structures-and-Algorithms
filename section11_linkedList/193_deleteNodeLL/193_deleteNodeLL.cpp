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
        void deleteFrom(int index)
        {
            if(head == nullptr || index >= count()) return;
            Node *current = head;
            for(int i = 0; i < index - 1; i++)
                current = current->next;
            Node *temporary = current->next;
            current->next = current->next->next;
            delete temporary;
        }
};

int main()
{
    LinkedList list1;
    list1.create({1, 2, 3, 4, 5});
    list1.display();
    list1.deleteFrom(3);
    list1.display();
}