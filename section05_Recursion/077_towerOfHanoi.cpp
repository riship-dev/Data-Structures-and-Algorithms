#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, int A, int B, int C)
{
    if(n > 0)
    {
        towerOfHanoi(n - 1, A, C, B);
        cout << "Move " << A << " to " << C << endl;
        towerOfHanoi(n - 1, B, A, C);
    }
}

int main()
{
    towerOfHanoi(3, 1, 2, 3);
}