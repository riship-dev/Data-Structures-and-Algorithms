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
        int maximum()
        {
            int max = INT_MIN;
            Node *current = head;
            while(current != nullptr)
            {
                if(current->data > max) max = current->data;
                current = current->next;
            }
            return max;
        }
        int maximumRecursive(Node *current)
        {
            int max = INT_MIN;
            if(current == nullptr) return INT_MIN;
            max = maximumRecursive(current->next);
            if(max > current->data) return max;
            else return current->data;
            return 0;
        }
};

int main()
{
    LinkedList list1;
    vector<int> values = {1, 2, 3, 4, 5};
    list1.create(values);
    list1.display();
    cout << list1.maximum() << endl;
    cout << list1.maximumRecursive(list1.getHead()) << endl;
}