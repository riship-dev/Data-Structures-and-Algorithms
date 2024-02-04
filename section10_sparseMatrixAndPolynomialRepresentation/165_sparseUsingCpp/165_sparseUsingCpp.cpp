#include <bits/stdc++.h>
using namespace std;

class Element
{
    public:
        int i;
        int j;
        int x;
};
class SparseMatrix
{
    private:
        int m;
        int n;
        int nonZeroCount;
        Element *element;
    public:
        SparseMatrix(int m, int n, int nonZeroCount)
        {
            this -> m = m;
            this -> n = n;
            this -> nonZeroCount = nonZeroCount;
            element = new Element[this -> nonZeroCount];
        }
        ~SparseMatrix()
        {
            delete [] element;
        }
        void read()
        {
            cout << "Enter non-zero elements: " << endl;
            for(int i = 0; i < nonZeroCount; i++)
                cin >> element[i].i >> element[i].j >> element[i].x;
        }
        void display()
        {
            int k = 0;
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(element[k].i == i && element[k].j == j)
                        cout << element[k++].x << " ";
                    else 
                        cout << "0 ";
                }
                cout << endl;
            }
        }
};

int main()
{
    SparseMatrix s1(5, 5, 5);
    s1.read();
    s1.display();
}