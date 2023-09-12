#include <bits/stdc++.h>
using namespace std;

int factorial(int n);
int nCr(int n, int r);
int nCrRecursive(int n, int r);

int main()
{
    int n, r;
    cout << "n?: "; cin >> n;
    cout << "r?: "; cin >> r;

    cout << nCr(n, r) << endl;
    cout << nCrRecursive(n, r);
}

int factorial(int n)
{
    if(n == 0) return 1;
    return n * factorial(n - 1);
}
int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) + factorial(n - r);
    return numerator/denominator;
}
int nCrRecursive(int n, int r)
{
    if(n == r || r == 0) return 1;
    return nCrRecursive(n - 1, r - 1) + nCrRecursive(n - 1, r);
}