#include <bits/stdc++.h>
using namespace std;

void timer(int x) //recursive function
{
    if (x > 0) //base condition
    {
        cout << x << endl; //calling phase
        timer(x - 1);
        cout << x << endl; //returning phase
    }
}

int main()
{
    int n;
    cout << "A number?: "; cin >> n;
    timer(n);
}