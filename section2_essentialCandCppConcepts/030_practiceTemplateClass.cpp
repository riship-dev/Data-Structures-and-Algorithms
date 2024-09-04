#include <bits/stdc++.h>
using namespace std;

template <class dataType> class Rectangle {
    private:
        dataType length;
        dataType breadth;
    public:
        Rectangle(dataType length, dataType breadth) {
            this -> length = length;
            this -> breadth = breadth;
        }
        dataType area() {
            return length * breadth;
        }
        dataType perimeter() {
            return 2 * (length + breadth);
        }
};

int main() {
    Rectangle rectangle1(1.5, 2.5);
    cout << rectangle1.area() << endl;
    cout << rectangle1.perimeter() << endl;
}