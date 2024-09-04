#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length, int breadth) {
            this -> length = length;
            this -> breadth = breadth;
        }
        int area() {
            return length * breadth;
        }
        int perimeter() {
            return 2 * (length + breadth);
        }
};

int main() {
    Rectangle rectangle1(10, 5);
    cout << rectangle1.area() << endl;
    cout << rectangle1.perimeter() << endl;
}