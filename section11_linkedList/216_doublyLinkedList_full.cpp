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

        void insert(int value, int index) {
            if (index < 0) return;
            if (index == 0) {
                Node *newNode = new Node(value);
                if (head == nullptr) { 
                    head = newNode;
                    return;
                }
                newNode->next = head;
                head->previous = newNode;
                head = newNode;
                return;
            }
            Node *current = head;
            for(int i = 1; i < index && current; i++) current = current->next;
            if (!current) return;

            Node *newNode = new Node(value);
            if (!current->next) {
                newNode->previous = current;
                current->next = newNode;
                return;
            } 
            current->next->previous = newNode;
            newNode->previous = current;
            newNode->next = current->next;
            current->next = newNode;
        }
        void deleteIndex(int index) {
            if (index == 0) {
                if (head == nullptr) return;
                Node *toDelete = head;
                head->next->previous = nullptr;
                head = head->next;
                delete toDelete;
                return;
            }
            Node *current = head;
            for (int i = 1; i < index && current; i++) current = current->next;
            if (!current->next) return;
            Node *toDelete = current->next;
            if (!current->next->next) {
                delete toDelete;
                current->next = nullptr;
                return;
            }
            current->next->next->previous = current;
            current->next = current->next->next;
            delete toDelete;
        }
        void reverse() {
            Node *current = head, *temporary;
            while (current) {
                temporary = current->previous;
                current->previous = current->next;
                current->next = temporary;
                current = current->previous;
            }
            if (temporary) head = temporary->previous;
        }
};

int main() {
    DoublyLinkedList list1;
    list1.initialise({1, 2, 3, 4, 5});
    list1.display();
    list1.displayInReverse();

    //list1.insert(101, 0);
    //list1.insert(101, 3);
    //list1.insert(101, 5);
    //list1.deleteIndex(0);
    //list1.deleteIndex(2);
    //list1.deleteIndex(4);
    list1.reverse();
    list1.display();
    list1.displayInReverse();
}