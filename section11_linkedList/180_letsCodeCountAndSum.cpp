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

        int sum() {
            Node *current = head;
            int sum = 0;
            while (current) {
                sum += current->data;
                current = current->next; 
            }
            return sum;
        }
        int count() {
            Node *current = head;
            int count = 0;
            while (current) {
                count++;
                current = current->next; 
            }
            return count;
        }
};

int main() {
    LinkedList list1;
    list1.initialise({1, 2, 3, 4, 5});
    list1.display();
    cout << list1.sum() << endl;
    cout << list1.count() << endl;
}