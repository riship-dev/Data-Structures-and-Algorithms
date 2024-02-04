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
        SparseMatrix add(SparseMatrix s2)
        {
            int i, j, k;
            if(m != s2.m || n != s2.n) return SparseMatrix(0, 0, 0);
            SparseMatrix *sum = new SparseMatrix(m, n, nonZeroCount + s2.nonZeroCount);
            i = j = k = 0;
            while(i < nonZeroCount && j < s2.nonZeroCount)
            {
                if(element[i].i < s2.element[j].i)
                    sum -> element[k++] = element[i++];
                else if(element[i].i > s2.element[j].i)
                    sum -> element[k++] = s2.element[j++];
                else
                {
                    if(element[i].j < s2.element[j].j)
                        sum -> element[k++] = element[i++];
                    else if(element[i].j > s2.element[j].j)
                        sum -> element[k++] = s2.element[j++];
                    else
                    {
                        sum -> element[k] = element[i];
                        sum -> element[k++].x = element[i++].x + s2.element[j++].x;
                    } 
                }
            }
            for(; i < nonZeroCount; i++) sum -> element[k++] = element[i];
            for(; j < s2.nonZeroCount; j++) sum -> element[k++] = s2.element[j];
            sum -> nonZeroCount = k;
            return *sum;
        }
};



int main()
{
    SparseMatrix s1(5, 5, 5);
    SparseMatrix s2(5, 5, 5);
    s1.read();
    s2.read();

    cout << endl;
    s1.display();
    cout << endl;
    s2.display();
    cout << endl;

    s1.add(s2).display();
}