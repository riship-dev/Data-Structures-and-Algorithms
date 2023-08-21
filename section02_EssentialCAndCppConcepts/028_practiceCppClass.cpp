#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    private:
        double length;
        double breadth;
    public:
        Rectangle()
        {
            length = 1;
            breadth = 1;
        }
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
        void setLength(double l)
        {
            length = l;
        }
        void setBreadth(double b)
        {
            breadth = b;
        }
        double getLength()
        {
            return length;
        }
        double getBreadth()
        {
            return breadth;
        }
        ~Rectangle()
        {
            cout << "Object deleted";
        }
};

int main()
{
    Rectangle r1(10, 5);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    r1.setLength(20);
    r1.setBreadth(10);
    cout << r1.getLength() << endl;
    cout << r1.getBreadth() << endl;
}