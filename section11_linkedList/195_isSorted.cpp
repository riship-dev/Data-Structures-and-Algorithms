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
        
        bool isSorted() {
            if (head == nullptr || head->next == nullptr) return true;

            Node *current = head;
            while (current->next) {
                if (current->data > current->next->data) return false; 
                current = current->next;
            }
            return true;
        }

};

int main() {
    LinkedList list1;
    list1.initialise({1, 2, 3, 4, 5});
    list1.display();
    
    LinkedList list2;
    list2.initialise({1, 3, 4, 6, 5});
    list2.display();

    cout << list1.isSorted() << endl;
    cout << list2.isSorted() << endl;
}