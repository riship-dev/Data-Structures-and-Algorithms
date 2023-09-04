#include <bits/stdc++.h>
using namespace std;

void indirectRecursionA(int n);
void indirectRecursionB(int n);

int main()
{
    indirectRecursionA(20);
}

void indirectRecursionA(int n)
{
    if(n > 0)
    {
        cout << "A: " << n << endl;
        indirectRecursionB(n - 1);
    }
}
void indirectRecursionB(int n)
{
    if(n > 0)
    {
        cout << "B: " << n << endl;
        indirectRecursionA(n / 2);
    }
}