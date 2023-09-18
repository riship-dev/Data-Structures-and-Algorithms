#include <bits/stdc++.h>
using namespace std;

class Array
{
    private:
        int *A;
        int size;
        int numberOfElements;
    public:
        Array()
        {
            cout << "Size?: "; cin >> size;
            A = new int[size];
        }
        void initialize()
        {
            cout << "Number of Elements?: "; cin >> numberOfElements;
            for(int i = 0; i < numberOfElements; i++)
            {
                cout << "A[" << i << "]?: "; cin >> A[i];
            }
        }
        void display()
        {
            for(int i = 0; i < numberOfElements; i++) cout << A[i] << " ";
        }
};

int main()
{
    Array array1;
    array1.initialize();
    array1.display();
}