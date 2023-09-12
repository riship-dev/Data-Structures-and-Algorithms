#include <bits/stdc++.h>
using namespace std;

int nestedRecursion(int n);

int main()
{
    cout << nestedRecursion(95);
}

int nestedRecursion(int n)
{
    if (n > 100) return n - 10;
    return nestedRecursion(nestedRecursion(n + 11));
}