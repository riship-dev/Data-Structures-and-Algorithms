#include <bits/stdc++.h>
using namespace std;

//declaring the functions
double area(double l, double b);
double perimeter(double l, double b);

int main()
{
    double length, breadth;
    cout << "Enter length: "; cin >> length;
    cout << "Enter breadth: "; cin >> breadth;
    cout << "Area of " << length << " x " << breadth << " rectangle = " << area(length, breadth) << endl;
    cout << "Perimeter of " << length << " x " << breadth << " rectangle = " << perimeter(length, breadth);
}

//initialising the functions
double area(double l, double b)
{
    return l * b;
}
double perimeter(double l, double b)
{
    return 2 * (l + b);
}