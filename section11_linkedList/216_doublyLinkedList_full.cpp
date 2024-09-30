#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        Node *previous;
        int data;
        Node *next;

        Node (int value) {
            data = value;
            previous = nullptr;
            next = nullptr;
        }
};
class DoublyLinkedList {
    private:
        Node *head;
    public:
        DoublyLinkedList() {
            head = nullptr;
        }
        ~DoublyLinkedList() {
            Node *current = head, *toDelete = nullptr;
            while (current) {
                toDelete = current;
                current = current->next;
                delete toDelete;
            }
        }

        void initialise(vector <int> values) {
            head = new Node(values[0]);
            Node *current = head;
            for (int i = 1; i < values.size(); i++) {
                current->next = new Node(values[i]);
                current->next->previous = current;
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
        void displayInReverse() {
            Node *current = head;
            while (current->next) current = current->next;
            while (current) {
                cout << current->data << " ";
                current = current->previous;
            }
            cout << endl;
        }
};

int main() {
    DoublyLinkedList list1;
    list1.initialise({1, 2, 3, 4, 5});
    list1.display();
    list1.displayInReverse();
}