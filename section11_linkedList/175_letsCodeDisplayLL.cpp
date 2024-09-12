#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int datum;
        Node* next;
        Node(int datum) {
            this -> datum = datum;
            next = nullptr;
        }
};
class LinkedList {
    private:
        Node* head;
    public:
        LinkedList() {
            head = nullptr;
        }
        ~LinkedList() {
            Node* current = head;
            Node* nextNode = nullptr;
            while (current) {
                nextNode = current->next;
                delete current;
                current = nextNode;
            }
        }

        void initialise(vector <int> data) {
            head = new Node(data[0]);
            Node *current = head;
            for (int i = 1; i < data.size(); i++) {
                current->next = new Node(data[i]);
                current = current->next;
            }
        }
        void display() {
            Node *current = head;
            while (current) {
                printf("%d ", current->datum);
                current = current->next;
            }
            cout << endl;
        }
};

int main() {
    LinkedList list1;
    list1.initialise({1, 2, 3, 4, 5});
    list1.display();
}