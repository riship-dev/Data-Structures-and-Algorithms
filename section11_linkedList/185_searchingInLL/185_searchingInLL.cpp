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
            Node *current = head, *nextNode;
            while(current != nullptr)
            {
                nextNode = current->next;
                delete current;
                current = nextNode;
            }
            head = nullptr;
        }
        Node* getHead()
        {
            return head;
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
            while(current != nullptr)
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
        Node* search(int key)
        {
            Node *current = head;
            while(current != nullptr)
            {
                if(current->data == key) return current;
                current = current->next;
            }
            return nullptr;
        }
        Node* searchRecursive(Node *current, int key)
        {
            if(current == nullptr) return nullptr;
            if(current->data == key) return current;
            searchRecursive(current->next, key);
            return nullptr;
        }
};

int main()
{
    LinkedList list1;
    vector<int> values = {1, 2, 3, 4, 5};
    list1.create(values);
    list1.display();

    cout << list1.search(3) << endl;
    cout << list1.search(13) << endl;
    cout << list1.searchRecursive(list1.getHead(), 3) << endl;
    cout << list1.searchRecursive(list1.getHead(), 13) << endl;
}