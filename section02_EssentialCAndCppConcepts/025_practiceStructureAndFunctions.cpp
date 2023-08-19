#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    double length;
    double breadth;
};
void initialize(struct Rectangle *r, double l, double b);
double area(struct Rectangle r);
double perimeter(struct Rectangle r);
void changeLength(struct Rectangle *r, double l);

int main()
{
    Rectangle r1;
    double l, b;
    cout << "Enter length: "; cin >> l;
    cout << "Enter breadth: "; cin >> b;
    initialize(&r1, l, b);
    cout << r1.length << " " << r1.breadth << endl;
    cout << area(r1) << endl;
    cout << perimeter(r1) << endl;
    changeLength(&r1, 20);
    cout << r1.length;
}

void initialize(struct Rectangle *r, double l, double b)
{
    r -> length = l;
    r -> breadth = b;
}
double area(struct Rectangle r)
{
    return r.length * r.breadth;
}
double perimeter(struct Rectangle r)
{
    return 2 * (r.length + r.breadth);
}
void changeLength(struct Rectangle *r, double l)
{
    r -> length = l;
}