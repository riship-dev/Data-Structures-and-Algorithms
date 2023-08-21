#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p; // write "*" only during declaration of pointer or dereferencing
    p = &a; // initializing address of "a" to p
    cout << "Using \"a\" => " << a << endl;
    cout << "Using \"p\" => " << *p << endl; //dereferencing 
    cout << "Address of \"a\" => " << p << endl; //address of "a"
    cout << "Address of \"a\" => " << &a << endl; //address of "a"
    cout << endl;

    //using pointers with array
    int b[] = {2, 4, 6, 8, 10};
    int *p1;
    p1 = &b[0]; //or just write "b" because b itself is a pointer
    for(int i = 0; i < 5; i++)
    {
        cout << p1[i] << endl; //in case of array, pointer acts as name of array
    }
    cout << endl;

    //creating an array in heap
    int *p2;
    p2 = (int *)malloc(5 * sizeof(int)); //allocating in heap
    //p2 = new int[5]; //C++ method
    p2[0] = 10;
    p2[1] = 20;
    p2[2] = 30;
    p2[3] = 40;
    p2[4] = 50;
    for(int i = 0; i < 5; i++)
    {
        cout << p2[i] << endl; //in case of array, pointer acts as name of array
    }
    delete [] p2; //delete for dynamic allocation; "[]" if its an array
}