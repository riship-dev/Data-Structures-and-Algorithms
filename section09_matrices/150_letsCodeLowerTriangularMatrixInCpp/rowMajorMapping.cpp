#include <bits/stdc++.h>
using namespace std;

class LowerTriangularMatrix
{
    private:
        int *A;
        int size;
    public:
        LowerTriangularMatrix(int n)
        {
            size = n;
            A = new int[n * (n + 1) / 2];
        }
        ~LowerTriangularMatrix(){delete []A;}
        void set(int i, int j, int value)
        {
            if(i >= j) A[i * (i - 1) / 2 + j - 1] = value; 
        }
        int get(int i, int j)
        {
            if(i <= j) return A[i * (i - 1) / 2 + j - 1];
            else return 0;
        }
        void display()
        {
            for(int i = 1; i <= size; i++)
            {
                for(int j = 1; j <= size; j++)
                {
                    if (i >= j) cout << A[i * (i - 1) / 2 + j - 1] << " ";
                    else cout << 0 << " ";
                }
                cout << endl;
            }
        }
};

int main()
{
    int n; cout << "Size?: "; cin >> n;
    LowerTriangularMatrix m1(n);
    
    int value;
    cout << "Enter values: " << endl;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> value;
            m1.set(i, j, value++);
        }
    cout << endl;

    m1.display();
    
    m1.~LowerTriangularMatrix();
}