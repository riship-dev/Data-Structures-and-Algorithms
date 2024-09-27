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
class LinkedList {
    private:
        Node *head;
    public:
        LinkedList() {head = nullptr;}
        ~LinkedList() {
            Node *current = head, *nextNode = nullptr;
            while (current) {
                nextNode = current->next;
                delete current;
                current = nextNode;
            }
        }

        void initialise(vector <int> values) {
            head = new Node(values[0]);
            Node *current = head;
            for(int i = 1; i < values.size(); i++) {
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

        void reverse() {
            Node *current = head;
            vector <int> listElements;
            while (current) {
                listElements.push_back(current->data);
                current = current->next;
            }
            current = head;
            for(int i = listElements.size() - 1; i >= 0; i--) {
                current->data = listElements[i];
                current = current->next;
            }
        }
        void reverseLinks() {
            Node *currentNode = head, *previousNode = nullptr, *nextNode = nullptr;
            while (currentNode) {
                nextNode = currentNode->next;
                currentNode->next = previousNode;
                previousNode = currentNode;
                currentNode = nextNode;
            }
            head = previousNode; 
        }

};

int main() {
    LinkedList list1;
    list1.initialise({1, 2, 3, 4, 5});
    list1.display();

    list1.reverse();
    list1.display();
}