#include <bits/stdc++.h>
using namespace std;

class DiagonalMatrix
{
    private:
        int *A;
        int size;
    public:
        DiagonalMatrix(int n)
        {
            size = n;
            A = new int[n];
        }
        void Set(int i, int j, int value)
        {
            if(i == j) 
            {
                A[i] = value;
                cout << "Value set at (" << i << ", " << j << ")." << endl;
            }
        }
        int Get(int i, int j)
        {
            if(i == j) return A[i];
            else return 0;    
        }
        void display()
        {
            for(int i = 0; i < size; i++)
            {
                for(int j = 0; j < size; j++)
                {
                    if(i == j) cout << A[i] << " ";
                    else cout << "0 ";
                }
                cout << endl;
            }
        }
        ~DiagonalMatrix(){delete []A;}
};

int main()
{
    DiagonalMatrix m1(3);
    m1.Set(0, 0, 5);
    m1.Set(1, 1, 6);
    m1.Set(2, 2, 7);
    cout << m1.Get(1, 1) << endl;
    m1.display();
    m1.~DiagonalMatrix();
}