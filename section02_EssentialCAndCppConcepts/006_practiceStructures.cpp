#include <bits/stdc++.h>
using namespace std;

struct Rectangle //a structure with two members
{
    double length;
    double breadth;
    //char x //allocates 4 but uses only 1; Uses nearest bigger size; This is known as padding
}; //can declare here too

//struct Rectangle r1; //available for all functions if declared here

int main()
{
    struct Rectangle r1 = {10,5};
    //struct Rectangle r1, r2, r3; //can declare multiple members in one line
    cout << "Size=" << sizeof(r1) << endl; //display size

    cout << "l=" << r1.length << endl; //display length
    cout << "b=" << r1.breadth << endl; // display breadth

    //modifing values
    r1.length = 15;
    r1.breadth = 7;
    cout << "mod l=" << r1.length << endl; //display length
    cout << "mod b=" << r1.breadth << endl; // display breadth

    //displaying area
    cout << "area=" << r1.length * r1.breadth;
}