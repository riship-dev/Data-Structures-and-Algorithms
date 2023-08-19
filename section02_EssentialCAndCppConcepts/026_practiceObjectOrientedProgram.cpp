#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    private:
        double length;
        double breadth;
    public:
        Rectangle(double l, double b)
        {
            length = l;
            breadth = b;
        }
        double area()
        {
            return length * breadth;
        }
        double perimeter()
        {
            return 2 * (length + breadth);
        }
        void changeLength(double l)
        {
            length = l;
        }
};

int main()
{
    Rectangle r1(10, 5);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    r1.changeLength(20);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
}