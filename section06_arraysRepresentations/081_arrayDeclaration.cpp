#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[5]; //declaration only (holds garbage values)
    int B[5] = {1, 2, 3, 4, 5}; //declaration + initialization 
    int C[5] = {1, 2}; //undeclared elements are initialised as zero
    int D[5] = {0}; //better than just to declare an array, all elements will be initialised to 0
    int E[] = {1, 2, 3, 4, 5}; //memory is allocated during compile time depending on no. of elements

    for(int i = 0; i < 5; i++) cout << A[i] << " ";
    cout << endl;
    for(int i = 0; i < 5; i++) cout << &A[i] << " "; //displays addresses of elements; they will have 4 (or 2) units difference
    cout << endl;
    for(int i = 0; i < 5; i++) cout << B[i] << " ";
    cout << endl;
    for(int i = 0; i < 5; i++) cout << C[i] << " ";
    cout << endl;
    for(int i = 0; i < 5; i++) cout << D[i] << " ";
    cout << endl;
    for(int i = 0; i < 5; i++) cout << E[i] << " ";
    cout << endl;
}