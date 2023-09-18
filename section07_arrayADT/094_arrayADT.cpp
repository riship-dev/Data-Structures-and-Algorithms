#include <bits/stdc++.h>
using namespace std;

class Array //using class to implement array as ADT
{
    private:
        int *A; //array head pointer
        int size; //size of array
        int numberOfElements; //number of manually initialised elements
    public:
        Array() //constructor that declares the array
        {
            cout << "Size?: "; cin >> size;
            A = new int[size];
        }
        void initialize() //function to initialise an array 
        {
            cout << "Number of Elements?: "; cin >> numberOfElements;
            for(int i = 0; i < numberOfElements; i++)
            {
                cout << "A[" << i << "]?: "; cin >> A[i];
            }
        }
        void display() //function to print all manually initialised elements in an array
        {
            for(int i = 0; i < numberOfElements; i++) cout << A[i] << " ";
        }
};

int main()
{
    Array array1; //array being declared
    array1.initialize(); //array being called
    array1.display(); //array elements being displayed
}