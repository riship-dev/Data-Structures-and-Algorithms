#include <bits/stdc++.h>
using namespace std;

double taylorSeries(int x, int n)
{
    static double p = 1, f = 1;
    if(n == 0) return 1;
    double r = taylorSeries(x, n - 1);
    p *= x;
    f *= n;
    return  r + (p / f);
}

int main()
{
    int x, n;
    cout << "x?: "; cin >> x;
    cout << "n?: "; cin >> n;
    cout << taylorSeries(x, n);
}