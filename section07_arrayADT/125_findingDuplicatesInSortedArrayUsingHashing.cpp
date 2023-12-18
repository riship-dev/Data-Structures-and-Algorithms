#include <bits/stdc++.h>
using namespace std;

class Array //using class to implement array as ADT
{
    private:
        int *A; //array head pointer
        int size; //size of array
        int numberOfElements; //number of manually initialised elements
    public:
        Array() //constructor: Declares an array
        {
            cout << "<----------------Declaring array---------------->" << endl;
            cout << "Size?: "; cin >> size;
            A = new int[size];
            cout << "Array declared." << endl;
        }
        void initialize() //function to manually initialize the array 
        {
            cout << "<----------------Initialising---------------->" << endl;
            cout << "Number of Elements?: "; cin >> numberOfElements;
            for(int i = 0; i < numberOfElements; i++)
            {
                cout << "A[" << i << "]?: "; cin >> A[i];
            }
            cout << "Array initialised. Array:" << endl;
            display();
        }
        void display() //function to display all manually initialized elements in the array
        {
            //cout << "<----------------Printing---------------->" << endl;
            for(int i = 0; i < numberOfElements; i++) cout << A[i] << " ";
            cout << endl;
            //cout << "All elements printed." << endl;  
        }
        void findDuplicatesInASortedArrayUsingHashing(Array hashTable)
        {
            for(int i = 0; i < numberOfElements; i++)
            {
                hashTable.A[A[i]]++;
            }
            for(int i = 0; i <= 4; i++)
            {
                if(hashTable.A[i] > 1) cout << i << " for " << hashTable.A[i] << " times." << endl;
            }
        }
};

int main()
{
    Array array1;
    array1.initialize();

    Array hashTable;
    hashTable.initialize();
    array1.findDuplicatesInASortedArrayUsingHashing(hashTable);
}