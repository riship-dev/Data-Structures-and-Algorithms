#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    
    int *p;
    p = new int[5]; //dynamic allocation
    for(int i = 0; i < 5; i++) p[i] = i + 1;

    for(int i = 0; i < 5; i++) cout << A[i] << " ";
    cout << endl;
    for(int i = 0; i < 5; i++) cout << p[i] << " ";
    cout << endl;

    delete [] p;
}