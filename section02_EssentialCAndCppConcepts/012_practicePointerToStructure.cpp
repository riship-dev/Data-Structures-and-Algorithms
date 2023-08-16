#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    //Rectangle r = {10, 5}; //Need to write preceding "struct" if its a C compiler
    //Rectangle *p = &r;
    //cout << p -> length << endl;
    //cout << p -> length << endl;

    //dynamic allocation in heap
    Rectangle *p;
    //p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p = new Rectangle;
    p -> length = 15;
    p -> breadth = 10;
    cout << p -> length << endl;
    cout << p -> breadth << endl;
    delete p;
}