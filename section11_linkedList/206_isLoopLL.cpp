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

        void createLoop() {
            Node *current = head;
            Node *loopEnd = nullptr;
            int loopEndIndex = 0;
            while (current) {
                if (loopEndIndex == 2) loopEnd = current;
                if (current->next == nullptr) {  
                    current->next = loopEnd;     
                    break;
                }
                current = current->next;
                loopEndIndex++;
            }
        }
        bool isLoop() {
            Node *slow = head;
            Node *fast = head;
            while (fast != nullptr && fast->next != nullptr) {
                slow = slow->next;           
                fast = fast->next->next;    
                if (slow == fast) return true;
            }
            return false;
        }
};

int main() {
    LinkedList list1;
    list1.initialise({1, 2, 3, 4, 5});
    list1.display();

    cout << list1.isLoop() << endl;
    list1.createLoop();
    cout << list1.isLoop();
}