#include <bits/stdc++.h>
using namespace std;

void swap1(int x, int y) //call by value function
{
    int temp = x;
    x = y;
    y = temp;
}
void swap2(int *x, int *y) //call by address function
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void swap3(int &x, int &y) //call by reference function
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 1, b = 2;
    swap1(a, b); //"a" and "b" will remain unchanged
    cout << a << " " << b << endl;
    swap2(&a, &b); //"a" and "b" will change
    cout << a << " " << b << endl;
    swap3(a, b); //"a" and "b" will change
    cout << a << " " << b << endl;
}