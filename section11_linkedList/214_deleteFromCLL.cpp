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

        void deleteIndex(int index) {
            if (index == 0) {
                if (head == nullptr) return;
                if (head->next == nullptr) {
                    delete head;
                    head = nullptr;
                    return;
                }
                Node *toDelete = head;
                Node *current = head;
                while (current->next != head) current = current->next;
                current->next = head->next;
                head = head->next;
                delete toDelete;
                return;
            }
            Node *current = head;
            for (int i = 1; i < index; i++) current = current->next;
            Node *toDelete = current->next;
            current->next = current->next->next;
            delete toDelete;
        }
};

int main() {
    CircularLinkedList list1;
    list1.initialise({1, 2, 3, 4, 5});
    list1.display();

    list1.deleteIndex(4);
    list1.display();    
}