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
        void binarySearch() //function to search a user-input value using binary search
        {
            cout << "<----------------Performing binary search---------------->" << endl;
            int value; cout << "Value?: "; cin >> value;
            int first = 0, last = numberOfElements - 1;
            while(first <= last)
            {
                int middle = (first + last) / 2;
                if(A[middle] == value) 
                {
                    cout << value << " found at index " << middle << endl;
                    break;
                }
                else if(middle < value) first = middle + 1;
                else last = middle - 1;
            }
            if(first > last) cout << "Value not found :(" << endl;
        }
        void get() //function to get value of given index
        {
            cout << "<----------------Getting value---------------->" << endl;
            int index; cout << "Index?: "; cin >> index;
            if(index >= 0 && index < numberOfElements) cout << "Value at index " << index << ": " << A[index] << endl;
            else cout << "Invalid index :(" << endl;
        }
        void set() //function to set given value to index
        {
            cout << "<----------------Setting value---------------->" << endl;
            int index; cout << "Index?: "; cin >> index;
            int value; cout << "Value?: "; cin >> value;
            if(index >= 0 && index < numberOfElements) 
            {
                A[index] = value;
                cout << value << " set to A[" << index << "]." << endl; 
                cout << "Updated array:" << endl;
                display();
            }
            else cout << "Invalid index :(" << endl;
        }
        void maximum() //function to find maximum of array
        {
            cout << "<----------------Finding maximum value in array---------------->" << endl;
            int max = 0;
            for(int i = 0; i < numberOfElements; i++) if(A[i] > max) max = A[i];
            cout << "Maximum value: " << max << endl;
        }
        void minimum() //function to find minimum of array
        {
            cout << "<----------------Finding minimum value in array---------------->" << endl;
            int min = A[0];
            for(int i = 0; i < numberOfElements; i++) if(A[i] < min) min = A[i];
            cout << "Minimum value: " << min << endl;
        }
        void sum() //function to find sum of values of array
        {
            cout << "<----------------Finding sum of values---------------->" << endl;
            int sum = 0;
            for(int i = 0; i < numberOfElements; i++) sum += A[i];
            cout << "Sum = " << sum << endl;
        }
        void average() //function to find average of values of array
        {
            cout << "<----------------Finding average of values---------------->" << endl;
            int sum = 0;
            for(int i = 0; i < numberOfElements; i++) sum += A[i];
            cout << "Average = " << (float) sum / numberOfElements << endl;
        }
        void reverse() //function to reverse array
        {
            cout << "<----------------Reversing array---------------->" << endl;
            int array2[numberOfElements];
            for(int i = numberOfElements - 1, j = 0; i >= 0; i--, j++) array2[j] = A[i];
            for(int i = 0; i < numberOfElements; i++) A[i] = array2[i];
            cout << "Array reversed." << endl;
            cout << "Updated array: " << endl;
            display();
        }
        void reverseInPlace() //function to reverse array in place
        {
            cout << "<----------------Reversing array in place---------------->" << endl;
            for(int i = 0, j = numberOfElements - 1; i < j; i++, j--) 
            {
                int temporary = A[i];
                A[i] = A[j];
                A[j] = temporary;
            }
            cout << "Array reversed." << endl;
            cout << "Updated array: " << endl;
            display();
        }
        void insertInSortedArray() //function to insert in a sorted array (without messing up the sorting)
        {
            cout << "<----------------Inserting in sorted array---------------->" << endl;
            int value; cout << "Value?: "; cin >> value;
            int i = numberOfElements - 1;
            if(numberOfElements == size)
            {
                cout << "Array is full :(" << endl;
                return;
            }
            while(A[i] > value) 
            {
                A[i + 1] = A[i];
                i--;
            }
            A[i + 1] = value;
            numberOfElements++;
            cout << "Value inserted." << endl;
            cout << "Updated array:" << endl;
            display();
        }
        void isSorted() //function to check if an array is sorted
        {
            cout << "<----------------Checking if array is sorted---------------->" << endl;
            for(int i = 0; i < numberOfElements - 1; i++)
            {
                if(A[i] > A[i + 1])
                {
                    cout << "Array not sorted :(" << endl;
                    return;
                }
            }
            cout << "Array is sorted." << endl;
        }
        void rearrangeSignedNumbers() //function to move -ve numbers to left and +ve to right
        {
            cout << "<----------------Rearranging signed elements---------------->" << endl;
            int i = 0, j = numberOfElements - 1;
            while(i < j)
            {
                while(A[i] < 0) i++;
                while(A[j] >= 0) j--;
                if(i < j)
                {
                    int temporary = A[i];
                    A[i] = A[j];
                    A[j] = temporary;
                }
            }
            cout << "Array rearranged." << endl;
            cout << "Updated array:" << endl;
            display();
        }
        void mergeArrays(Array array2) //function to merge two arrays
        {
            cout << "<----------------Merging Arrays---------------->" << endl;
            Array array3;
            array3.numberOfElements = 10;
            int i = 0, j = 0, k = 0;
            while(i < numberOfElements && j < array2.numberOfElements)
            {
                if(A[i] < array2.A[j]) array3.A[k++] = A[i++];
                else array3.A[k++] = array3.A[k++] = array2.A[j++];
            }
            for(; i < numberOfElements; i++) array3.A[k++] = A[i];
            for(; j < array2.numberOfElements; j++) array3.A[k++] = array2.A[j];
            cout << "Arrays merged." << endl;
            cout << "Merged array:" << endl;
            array3.display();
        }
        void unionArray(Array array2) //function to perform union of arrays
        {
            cout << "<----------------Performing Union of Arrays---------------->" << endl;
            Array array4;
            int i = 0, j = 0, k = 0;
            while(i < numberOfElements && j < array2.numberOfElements)
            {
                if(A[i] < array2.A[j]) array4.A[k++] = A[i++];
                else if(array2.A[j] < A[i]) array4.A[k++] = array2.A[j++];
                else
                {
                    array4.A[k++] = A[i++];
                    j++;
                }
            }
            for(;i < numberOfElements; i++) array4.A[k++] = A[i];
            for(;j < array2.numberOfElements; j++) array4.A[k++] = array2.A[j];
            array4.numberOfElements = k;
            cout << "Union performed." << endl;
            array4.display();
        }
        void intersect(Array array2) //function to perform intersect of arrays
        {
            cout << "<----------------Performing Intersect of Arrays---------------->" << endl;
            Array array5;
            int i = 0, j = 0, k = 0;
            while(i < numberOfElements && j < array2.numberOfElements)
            {
                if(A[i] < array2.A[j]) i++;
                else if(array2.A[j] < A[i]) j++;
                else
                {
                    array5.A[k++] = A[i++];
                    j++;
                }
            }
            array5.numberOfElements = k;
            cout << "Intersect performed." << endl;
            array5.display();
        }
        void difference(Array array2) //function to perform set subtraction
        {
            cout << "<----------------Performing Difference of Arrays---------------->" << endl;
            Array array6;
            int i = 0, j = 0, k = 0;
            while(i < numberOfElements && j < array2.numberOfElements)
            {
                if(A[i] < array2.A[j]) array6.A[k++] = A[i++];
                else if(array2.A[j] < A[i]) j++;
                else
                {
                    i++;
                    j++;
                }
            }
            for(; i < numberOfElements; i++) array6.A[k++] = A[i];
            array6.numberOfElements = k;
            cout << "Array subtracted." << endl;
            array6.display();
        }
};

int main()
{
    Array array1;
    array1.initialize();
    Array array2;
    array2.initialize();
    //array1.append(); 
    //array1.insert();
    //array1.remove();
    //array1.linearSearch();
    //array1.linearSearchTransposition();
    //array1.linearSearchMoveToHeader();
    //array1.binarySearch();
    //array1.get();
    //array1.set();
    //array1.maximum();
    //array1.minimum();
    //array1.sum();
    //array1.average();
    //array1.reverse();
    //array1.reverseInPlace();
    //array1.insertInSortedArray();
    //array1.isSorted();
    //array1.rearrangeSignedNumbers();
    //array1.mergeArrays(array2);
    //array1.unionArray(array2);
    //array1.intersect(array2);
    array1.difference(array2);
}