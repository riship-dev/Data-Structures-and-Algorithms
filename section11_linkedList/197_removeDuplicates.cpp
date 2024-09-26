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

        void removeDuplicatesOnSortedList() {
            Node *current = head;
            while (current->next) {
                if (current->data == current->next->data) {
                    Node *toDelete = current->next;
                    current->next = current->next->next;
                    delete toDelete;
                }
                else current = current->next;
            }
        }
};

int main() {
    LinkedList list1;
    list1.initialise({1, 2, 2, 2, 3, 4, 4, 5});
    list1.display();

    list1.removeDuplicatesOnSortedList();
    list1.display();
}