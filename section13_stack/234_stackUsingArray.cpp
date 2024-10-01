#include <bits/stdc++.h>
using namespace std;

class Stack {
    private:
        int size;
        int top;
        int *stackItems;
    public:
        Stack(int size) {
            this->size = size;
            top = -1;
            stackItems = new int[size];
        }
        ~Stack() {delete [] stackItems;}

        void display() {
            for(int i = top; i >= 0; i--) cout << stackItems[i] << " ";
            cout << endl;
        }
        bool isEmpty() {return top == -1;}
        bool isFull() {return top == size - 1;}
        void push(int value) {
            if (isFull()) return;
            stackItems[++top] = value;
        }
        void pushValues(vector <int> values) {
            for (int i = 0; i < values.size() && !isFull(); i++) 
                push(values[i]);
        }
        int pop() {
            if(isEmpty()) return -1;
            return stackItems[top--];
        }
        int peek(int index) {
            if (index >= top || index < 0) return -1;
            return stackItems[top - index + 1];
        }
        int stackTop() {
            if (top == -1) return -1;
            return stackItems[top]; 
        }
};

int main() {
    Stack stack1(5);
    //stack1.push(1);
    //stack1.display();
    
    //stack1.pushValues({1, 2, 3, 4, 5});
    //stack1.display();
    
    //cout << stack1.pop() << endl;
    //stack1.display();

    //cout << stack1.peek(2) << endl;
    //cout << stack1.peek(100) << endl;
    //cout << stack1.peek(-2) << endl;

    cout << stack1.isEmpty() << endl;
    //cout << stack1.isFull() << endl;
}