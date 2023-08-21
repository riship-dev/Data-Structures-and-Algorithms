#include <bits/stdc++.h>
using namespace std;

// Definition of the Rectangle class
class Rectangle
{
private:
    // Private member variables for length and breadth
    double length;
    double breadth;

public:
    // Constructor to initialize length and breadth
    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }

    // Member function to calculate the area
    double area()
    {
        return length * breadth;
    }

    // Member function to change the length
    void changeLength(double l)
    {
        length = l;
    }
};

int main()
{
    // Create an instance of the Rectangle class
    Rectangle r1(10, 5);

    // Calculate and print the area of the rectangle using the area() function
    cout << "Initial Area: " << r1.area() << endl;

    // Change the length of the rectangle using the changeLength() function
    r1.changeLength(20);

    // Calculate and print the updated area of the rectangle
    cout << "Updated Area: " << r1.area() << endl;

    return 0;
}
