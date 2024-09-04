#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int* pointerTo_a = &a; // dec + init a pointer
    cout << a << endl;
    cout << pointerTo_a << endl;
    cout << *pointerTo_a << endl; // deref a pointer

    int array1[] = {1, 2, 3, 4, 5};
    int* pointerTo_array1 = array1; //An array's name is an address; Pointer acts as name of array
    cout << pointerTo_array1[0] << endl;

    //Create array in heap
    int *pointerTo_arrayInHeap = new int[5];
    pointerTo_arrayInHeap[0] = 101;
    cout << pointerTo_arrayInHeap[0] << endl;
    delete [] pointerTo_arrayInHeap; //Always release memory when dynamically allocating
}