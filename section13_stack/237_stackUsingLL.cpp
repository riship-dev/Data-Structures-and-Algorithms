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
class Stack {
    private:
        Node *top;
    public:
        Stack() {top = nullptr;}
        ~Stack() {
            Node *current = top, *toDelete = nullptr;
            while (current) {
                toDelete = current;
                current = current->next;
                delete toDelete;
            }
        }
        
        void display() {
            if (top == nullptr) return;
            Node *current = top;
            while (current) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
        void push(int value) {
            Node *newNode = new Node(value);
            newNode->next = top;
            top = newNode;
        }
        void pushValues(vector <int> values) {
            for (int i = 0; i < values.size(); i++) push(values[i]);
        }
        int pop() {
            if (top == nullptr) return -1;
            Node *toDelete = top;
            top = top->next;
            return toDelete->data;
            delete toDelete;
        }
        int getTop() {
            if (top == nullptr) return -1;
            return top->data;
        }
};

int main() {
    Stack stack1;
    //stack1.push(101);

    stack1.pushValues({1, 2, 3, 4, 5});
    stack1.display();

    cout << stack1.pop() << endl;
    stack1.display();
}