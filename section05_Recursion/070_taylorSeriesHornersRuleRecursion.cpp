#include <bits/stdc++.h>
using namespace std;

double taylorSeries(int x, int n)
{
    static double s;
    if(n == 0) return s;
    s = 1 + x * s / n;
    return taylorSeries(x, n - 1);
}

int main()
{
    int x, n;
    cout << "x?: "; cin >> x;
    cout << "n?: "; cin >> n;
    cout << taylorSeries(x, n);
}