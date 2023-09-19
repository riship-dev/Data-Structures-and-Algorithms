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
            cout << "<----------------Declaring Array---------------->" << endl;
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
        void append() //function to append a user-input value to the end of the array
        {
            cout << "<----------------Appending---------------->" << endl;
            int value; cout << "Value?: "; cin >> value;
            A[numberOfElements] = value; //appending the array
            numberOfElements++; //updating number of elements
            cout << "Appended: " << value << endl;
            cout << "Updated array:" << endl;
            display();
        }
        void insert() //function to insert a user-input value at a specific index in the array
        {
            cout << "<----------------Inserting---------------->" << endl;
            int index; cout << "Index?: "; cin >> index;
            int value; cout << "Value?: "; cin >> value;
            if(index >= 0 && index <= numberOfElements)
            {
                for(int i = numberOfElements; i > index; i--) A[i] = A[i - 1]; //copying i - 1 element to i element
                A[index] = value; //inserting at given index
                numberOfElements++; //updating number of elements
                cout << "Inserted " << value << " at index " << index << endl;
                cout << "Updated array:" << endl;
                display();
            }
            else cout << "Invalid index :(" << endl;
        }
};

int main()
{
    Array array1;
    array1.initialize();
    array1.append(); 
    array1.insert();
}