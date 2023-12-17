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
        void findDuplicatesInASortedArray()
        {
            int duplicatesCount = 0, lastDuplicate = 0;
            //displaying elements with duplicates
            for(int i = 0; i < numberOfElements; i++)
            {
                if(A[i] == A[i + 1] && A[i] != lastDuplicate)
                {
                    cout << A[i] << " has duplicates." << endl;
                    lastDuplicate = A[i];
                }
            }
            //counting duplicates
            for(int i = 0; i < numberOfElements - 1; i++)
            {
                if(A[i] == A[i + 1])
                {
                    int j = i + 1;
                    while(A[j] == A[i]) j++;
                    cout << A[i] << " is appearing " << j - i << " times." << endl;
                    i = j - 1;
                }
            }
        }
};

int main()
{
    Array array1;
    array1.initialize();
    array1.findDuplicatesInASortedArray();
}