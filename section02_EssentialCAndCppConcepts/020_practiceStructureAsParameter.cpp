#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void changeLength1(struct Rectangle x) //call by value function
{
    x.length++;
}
void changeLength2(struct Rectangle &x) //call by reference function
{
    x.length++;
}
void changeLength3(struct Rectangle *x) //call by address function
{
    (*x).length++;
}


int main()
{
    Rectangle r1 = {10, 5};
    
    changeLength1(r1); //r1 remains unaffected
    cout << r1.length << endl;
    
    changeLength2(r1); //r1 affected
    cout << r1.length << endl;
    
    changeLength3(&r1); //r1 affected
    cout << r1.length << endl;
}