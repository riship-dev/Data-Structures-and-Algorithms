#include <bits/stdc++.h>
using namespace std;

int fibonacciIterative(int n);
int fibonacciRecursiveExponential(int n);
int fibonacciRecursiveLinear(int n);
int F[10];

int main()
{
    int i, n;
    for(i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    
    cout << "n?: "; cin >> n;
    cout << fibonacciIterative(10) << endl;
    cout << fibonacciRecursiveExponential(10) << endl;
    cout << fibonacciRecursiveLinear(10);
}

int fibonacciIterative(int n)
{
    int s = 0, t0 = 0, t1 = 1, i;
    if(n <= 1) return n;
    for(i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
int fibonacciRecursiveExponential(int n)
{
    if(n <= 1) return n;
    return fibonacciRecursiveExponential(n - 2) + fibonacciRecursiveExponential(n - 1);
}
int fibonacciRecursiveLinear(int n)
{
    if(n <= 1)
    { 
        F[n] = n;
        return n;
    }
    if(F[n - 2] == -1) F[n - 2] = fibonacciRecursiveLinear(n - 2);
    if(F[n - 1] == -1) F[n - 1] = fibonacciRecursiveLinear(n - 1);
    return F[n - 2] + F[n - 1]; 
    return fibonacciRecursiveExponential(n - 2) + fibonacciRecursiveExponential(n - 1);
}