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
        Node* head;
    public:
        LinkedList()
        {
            head = nullptr;
        }
        ~LinkedList()
        {
            Node *current = head, *nextNode;
            while(current != nullptr)
            {
                nextNode = current->next;
                delete current;
                current = current->next;
            }
            head = nullptr;
        }
        Node* getHead()
        {
            return head;
        }
        void create(vector<int> values)
        {
            int size = values.size();
            head = new Node(values[0]);
            Node *current = head;
            for(int i = 1; i < size; i++)
            {
                current->next = new Node(values[i]);
                current = current->next;
            }
        }
        void display()
        {
            Node *current = head;
            while(current != nullptr)
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
        int sumOf()
        {
            Node *current = head; int sum = 0;
            while(current != nullptr)
            {
                sum += current->data;
                current = current->next;
            }
            return sum;
        }
        int sumOfRecursive(Node *current)
        {
            if(current == nullptr) return 0;
            return sumOfRecursive(current->next) + current->data;
        }
};

int main()
{
    LinkedList list1;
    vector<int> values = {1, 2, 3, 4, 5};
    list1.create(values);
    list1.display();
    cout << list1.sumOf() << endl;
    cout << list1.sumOfRecursive(list1.getHead()) << endl;
}