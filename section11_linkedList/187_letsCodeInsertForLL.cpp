#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node (int data) {
            this->data = data;
            next = nullptr;
        }
};
class LinkedList {
    private:
        Node *head;
    public:
        LinkedList() {
            head = nullptr;
        }
        ~LinkedList() {
            Node *current = head;
            Node *nextNode = nullptr;
            while (current) {
                nextNode = current->next;
                delete current;
                current = nextNode;
            }
        }

        void initialise(vector <int> values) {
            head = new Node(values[0]);
            Node *current = head;
            for (int i = 1; i < values.size(); i++) {
                current->next = new Node(values[i]);
                current = current->next;
            }
        }
        void display() {
            Node *current = head;
            while (current) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
        
        void insert(int data, int index) {
            Node *newNode = new Node(data);
            if (index == 0) {
                newNode->next = head;
                head = newNode;
                return;
            }
            Node *current = head;
            for (int i = 1; i < index; i++) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
};

int main() {
    LinkedList list1;
    list1.initialise({1, 2, 3, 4, 5});
    list1.display();

    list1.insert(101, 0);
    list1.display();
}