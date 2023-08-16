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
struct Rectangle *createStruct() //function that returns a struct element
{
    struct Rectangle *p;
    p = new Rectangle;
    //p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p -> length = 100;
    p -> breadth = 50;

    return p;
};

int main()
{
    Rectangle r1 = {10, 5};
    
    changeLength1(r1); //r1 remains unaffected
    cout << r1.length << endl;
    
    changeLength2(r1); //r1 affected
    cout << r1.length << endl;
    
    changeLength3(&r1); //r1 affected
    cout << r1.length << endl;
    
    cout << endl;

    struct Rectangle *r2 = createStruct(); //creating a struct element
    cout << r2 -> length << " " << r2 -> breadth;
}