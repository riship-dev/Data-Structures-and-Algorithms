#include <bits/stdc++.h>
using namespace std;

double taylorSeries(int x, int n)
{
    double s = 1;
    int i;
    double num = 1, den = 1;
    for(i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }
    return s;
}

int main()
{
    int x, n;
    cout << "x?: "; cin >> x;
    cout << "n?: "; cin >> n;
    cout << taylorSeries(x, n);
}