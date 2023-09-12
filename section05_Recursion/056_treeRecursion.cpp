#include <bits/stdc++.h>
using namespace std;
static int x = 0;

void treeRecursion(int n)
{
    x++;
    if(n > 0)
    {
        cout << n << endl;
        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
}

int main()
{
    treeRecursion(3);
    cout << x; //no. of function calls
}