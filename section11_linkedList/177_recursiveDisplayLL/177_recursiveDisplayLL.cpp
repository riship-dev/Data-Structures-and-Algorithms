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
        Node* head;
    public:
        LinkedList()
        {
            head = nullptr;
        }
        ~LinkedList()
        {
            Node* current = head;
            Node* nextNode = nullptr;
            while(current != nullptr)
            {
                nextNode = current->next;
                delete current;
                current = nextNode;
            }
            head = nullptr;
        }
        void create(int arr[], int size)
        {
            head = new Node(arr[0]);
            Node *current = head;
            for (int i = 1; i < size; i++)
            {
                current->next = new Node(arr[i]);
                current = current->next;
            }
        }
        void displayRecursive(Node* current) 
        {
            if(current != nullptr)
            {
                cout << current->data << " ";
                displayRecursive(current->next);
            }
        }
        Node* getHead()
        {
            return head;
        }
};

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    int size = sizeof(A)/sizeof(A[0]);
    LinkedList list1;
    list1.create(A, size);
    list1.displayRecursive(list1.getHead());
    list1.~LinkedList();
}