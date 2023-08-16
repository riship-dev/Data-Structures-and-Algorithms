#include <bits/stdc++.h>
using namespace std;

void displayElements(int arr[], int n) //function to pass array as parameter
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int * createArr(int n) //function that returns an array (pointer)
{
    int *p = new int[n];
    return p;
} 

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    displayElements(arr, sizeof(arr)/sizeof(arr[0])); //using array as parameter
    cout << endl;
    
    int *arr1 = createArr(3); //calling a function that returns pointer to an array
    arr1[0] = 6;
    arr1[1] = 7;
    arr1[2] = 8;
    displayElements(arr1, 3);
}