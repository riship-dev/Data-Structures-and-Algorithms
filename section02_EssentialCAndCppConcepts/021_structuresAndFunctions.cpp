#include <bits/stdc++.h>
using namespace std;

// Definition of a structure named Rectangle
struct Rectangle
{
    double length;
    double breadth;
};

// Function to initialize a Rectangle
void initialize(struct Rectangle *r, double l, double b);

// Function to calculate the area of a Rectangle
double area(struct Rectangle r);

// Function to change the length of a Rectangle
void changeLength(struct Rectangle *r, double l);

int main()
{
    // Declare a Rectangle variable
    Rectangle r1;
    
    // Initialize r1 using the initialize function
    initialize(&r1, 10, 5);
    cout << "Length: " << r1.length << " Breadth: " << r1.breadth << endl;
    
    // Calculate and print the area of r1 using the area function
    cout << "Area: " << area(r1) << endl;
    
    // Change the length of r1 using the changeLength function
    changeLength(&r1, 20);
    cout << "Updated Length: " << r1.length;
    
    return 0;
}

// Function to initialize a Rectangle
void initialize(struct Rectangle *r, double l, double b)
{
    r->length = l;
    r->breadth = b;
}

// Function to calculate the area of a Rectangle
double area(struct Rectangle r)
{
    return r.length * r.breadth;
}

// Function to change the length of a Rectangle
void changeLength(struct Rectangle *r, double l)
{
    r->length = l;
}