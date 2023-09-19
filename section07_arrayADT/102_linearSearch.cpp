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
        void remove() //function to delete a user-input index's value
        {
            cout << "<----------------Deleting---------------->" << endl;
            int index; cout << "Index?: "; cin >> index;
            if(index >= 0 && index < numberOfElements)
            {
                for(int i = index; i < numberOfElements; i++) A[i] = A[i + 1]; //copy i + 1 elements to i
                numberOfElements--;
                cout << "Value at index " << index << " deleted." << endl;
                cout << "Updated array:" << endl;
                display();
            }
            else cout << "Invalid index :(" << endl;
        }
        void linearSearch() //function to search a user-input value linearly
        {
            cout << "<----------------Performing linear search---------------->" << endl;
            int value; cout << "Value?: "; cin >> value;
            bool notFound = 1;
            for(int i = 0; i < numberOfElements; i++) if(A[i] == value) //traversing array to find a match
            {
                cout << value << " found at index " << i << endl;
                notFound = 0;
            }
            if(notFound) cout << "Value not found :(" << endl;
        }
        void linearSearchTransposition() //linear search using transposition to improve efficiency
        {
            cout << "<----------------Performing linear search with transposition---------------->" << endl;
            int value; cout << "Value?: "; cin >> value;
            bool notFound = 1;
            for(int i = 0; i < numberOfElements; i++) if(A[i] == value) //traversing array to find a match
            {
                cout << value << " found at index " << i << ". A[" << i << "] transposed."<< endl;
                int temporary = A[i];
                A[i] = A[i - 1];
                A[i - 1] = temporary; 
                notFound = 0;
                cout << "Updated array: " << endl;
                display();
            }
            if(notFound) cout << "Value not found :(" << endl;
        }
        void linearSearchMoveToHeader() //linear search using move to header to improve efficiency
        {
            cout << "<----------------Performing linear search with move to header---------------->" << endl;
            int value; cout << "Value?: "; cin >> value;
            bool notFound = 1;
            for(int i = 0; i < numberOfElements; i++) if(A[i] == value) //traversing array to find a match
            {
                cout << value << " found at index " << i << ". A[" << i << "] moved to header."<< endl;
                int temporary = A[i];
                A[i] = A[0];
                A[0] = temporary; 
                notFound = 0;
                cout << "Updated array: " << endl;
                display();
            }
            if(notFound) cout << "Value not found :(" << endl;
        }
};

int main()
{
    Array array1;
    array1.initialize();
    //array1.append(); 
    //array1.insert();
    //array1.remove();
    array1.linearSearch();
    array1.linearSearchTransposition();
    array1.linearSearchMoveToHeader();
}