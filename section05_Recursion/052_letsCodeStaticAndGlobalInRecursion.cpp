#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    cout << fun(5);
}