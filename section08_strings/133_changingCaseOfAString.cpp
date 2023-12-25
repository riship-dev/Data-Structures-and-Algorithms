#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "WELcOME";
    int i = 0;
    for(i = 0; A[i] != '\0'; i++)
    {
        if(A[i] >= 62 && A[i] <= 90) A[i] += 32;
        else if(A[i] >= 'a' && A[i] <= 122) A[i] -= 32;
    }
    cout << A;
}