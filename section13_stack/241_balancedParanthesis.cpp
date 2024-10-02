#include <bits/stdc++.h>
using namespace std;

class Stack;
bool isBalanced(string expression);

int main() {
    // Test case 1: Balanced expression with different types of parentheses
    string expression1 = "{[()]}";
    cout << "expression1 expected: 1" << endl;
    cout << "expression1 returned: " << isBalanced(expression1) << endl << endl;

    // Test case 2: Unbalanced expression with missing closing bracket
    string expression2 = "{[()]";
    cout << "expression2 expected: 0" << endl;
    cout << "expression2 returned: " << isBalanced(expression2) << endl << endl;

    // Test case 3: Unbalanced expression with wrong closing order
    string expression3 = "{[(])}";
    cout << "expression3 expected: 0" << endl;
    cout << "expression3 returned: " << isBalanced(expression3) << endl << endl;

    // Test case 4: Balanced expression with nested brackets
    string expression4 = "{{[[(())]]}}";
    cout << "expression4 expected: 1" << endl;
    cout << "expression4 returned: " << isBalanced(expression4) << endl << endl;

    // Test case 5: Empty string (should be considered balanced)
    string expression5 = "";
    cout << "expression5 expected: 1" << endl;
    cout << "expression5 returned: " << isBalanced(expression5) << endl << endl;

    // Test case 6: Single opening bracket (unbalanced)
    string expression6 = "(";
    cout << "expression6 expected: 0" << endl;
    cout << "expression6 returned: " << isBalanced(expression6) << endl << endl;

    // Test case 7: Single closing bracket (unbalanced)
    string expression7 = ")";
    cout << "expression7 expected: 0" << endl;
    cout << "expression7 returned: " << isBalanced(expression7) << endl << endl;

    // Test case 8: Balanced expression with only one type of bracket
    string expression8 = "(((())))";
    cout << "expression8 expected: 1" << endl;
    cout << "expression8 returned: " << isBalanced(expression8) << endl << endl;

    // Test case 9: Unbalanced expression with extra opening bracket
    string expression9 = "(((()))";
    cout << "expression9 expected: 0" << endl;
    cout << "expression9 returned: " << isBalanced(expression9) << endl << endl;

    // Test case 10: Unbalanced expression with extra closing bracket
    string expression10 = "(()))";
    cout << "expression10 expected: 0" << endl;
    cout << "expression10 returned: " << isBalanced(expression10) << endl << endl;

    // Test case 11: Balanced expression with multiple bracket types
    string expression11 = "{[()()]()}";
    cout << "expression11 expected: 1" << endl;
    cout << "expression11 returned: " << isBalanced(expression11) << endl << endl;

    // Test case 12: Unbalanced expression with extra closing bracket in nested structure
    string expression12 = "{[(())]}]";
    cout << "expression12 expected: 0" << endl;
    cout << "expression12 returned: " << isBalanced(expression12) << endl << endl;
}

class Stack {
    private:
        int size;
        int top;
        char *stackItems;
    public:
        Stack(int size) {
            this->size = size;
            top = -1;
            stackItems = new char[size];
        }
        ~Stack() {delete [] stackItems;}

        bool isEmpty() {return top == -1;}
        bool isFull() {return top == size - 1;}
        void push(char value) {
            if (isFull()) return;
            stackItems[++top] = value;
        }
        int pop() {
            if(isEmpty()) return '\0';
            return stackItems[top--];
        }
        int getTop() {
            if (top == -1) return '\0';
            return stackItems[top]; 
        }
};
bool isBalanced(string expression) {
    int lengthOf_expression = expression.length();
    Stack parenthesis(lengthOf_expression);
    for (int i = 0; i < lengthOf_expression; i++) {
        if (
            expression[i] == '('
            || expression[i] == '['
            || expression[i] == '{'
        ) parenthesis.push(expression[i]);
        else if (
            (expression[i] == ')' && parenthesis.getTop() == '(')
            || (expression[i] == ']' && parenthesis.getTop() == '[')
            || (expression[i] == '}' && parenthesis.getTop() == '{')
        ) parenthesis.pop();
        else return false;
    }
    return parenthesis.isEmpty();
}