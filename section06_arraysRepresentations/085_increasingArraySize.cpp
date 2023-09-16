#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p = new int[5];
    for(int i = 0; i < 5; i++) p[i] = i + 1;
    
    int *q = new int[10]; //creating an array with size 10
    for(int i = 0; i < 5; i++) q[i] = p[i]; //initialising q with p elements 

    delete [] p; //deleting p array
    p = q; //assigning q value to p
    q = NULL; //removing q as array head

    for(int i = 5; i < 10; i++) p[i] = i + 1; //initialising new elements, now that the size is increased
    for(int i = 0; i < 10; i++) cout << p[i] << " ";

    delete [] p;
}