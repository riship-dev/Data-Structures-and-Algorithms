#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[5]; //declaring array
    //initialising individual elements
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;
    //or int A[] = {2,4,6,8,10,12,14}; //declaration + initialisation (no need to mention size)
    cout << sizeof(A) << endl; //displaying size of A => 5 * 4
    cout << A[1] << endl; //displaying individual elements
    cout << A[3] << endl; //returns garbage
    cout << A[34] << endl; //returns garbage
    cout << endl;
    for(int i = 0; i < 5; i++) //displaying all elements using a for loop
    {
        cout << A[i] << endl;
    }
    cout << endl;
    for(int x: A) //displaying all elements using a for each loop
    {
        cout << x << endl;
    }
    cout << endl;

    //initialisation during compilation (user input)
    int n;
    cout << "Enter size: ";
    cin >> n; //reading size of array
    int B[n]; //declaring array
    for(int i = 0; i < n; i++) //reading array elements
    {
        cout << "Enter element " << i << ": ";
        cin >> B[i];
    }
    for(int i = 0; i < n; i++) //displaying array elements
    {
        cout << B[i] << " ";
    }
}