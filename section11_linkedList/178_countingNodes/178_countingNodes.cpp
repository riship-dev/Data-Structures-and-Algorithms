#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
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
            Node* current = head;
            Node* nextNode;
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
        void create(int A[], int size)
        {
            head = new Node(A[0]);
            Node* current = head;
            for(int i = 1; i < size; i++)
            {
                current->next = new Node(A[i]);
                current = current->next;
            }
        }
        void display()
        {
            Node* current = head;
            while(current != nullptr)
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
        int count()
        {
            int count = 0;
            Node* current = head;
            while(current != nullptr)
            {
                count += 1;
                current = current->next;
            }
            return count;
        }
        int countRecursive(Node* current)
        {
            if(current == nullptr) return 0;
            return countRecursive(current -> next) + 1;
        }
};

int main()
{
    int A[] = {1, 2, 3, 4, 5}, size = sizeof(A) / sizeof(A[0]);
    LinkedList list1;
    list1.create(A, size);
    cout << list1.count() << endl;
    cout << list1.countRecursive(list1.getHead());
}