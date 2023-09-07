#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return n;
    }
    return sum(n - 1) + n;
}

int main()
{
    int n;
    cout << "Enter a number: "; cin >> n;
    cout << sum(n);   
}