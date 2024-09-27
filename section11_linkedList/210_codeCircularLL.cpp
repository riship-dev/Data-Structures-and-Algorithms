#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int value) {
            data = value;
            next = nullptr;
        }
};
class CircularLinkedList {
    private:
        Node *head;
    public:
        CircularLinkedList() {head = nullptr;}
        ~CircularLinkedList() {
            Node *current = head, *nextNode = nullptr;
            do {
                nextNode = current->next;
                delete current;
                current = nextNode;
            } while (current != head);
        }

        void initialise(vector <int> values) {
            head = new Node(values[0]);
            Node *current = head;
            int sizeOf_values = values.size();
            for (int i = 1; i < sizeOf_values; i++) {
                current->next = new Node(values[i]);
                current = current->next;
            }
            current->next = head;
        }
        void display() {
            Node *current = head;
            do {
                cout << current->data << " ";
                current = current->next;
            } while (current != head);
            cout << endl;
        }
};

int main() {
    CircularLinkedList list1;
    list1.initialise({1, 2, 3, 4, 5});
    list1.display();
}