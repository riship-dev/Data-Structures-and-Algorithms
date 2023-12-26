#include <bits/stdc++.h>
using namespace std;

void reverseString1(char A[]);
void reverseString2(char A[]);

int main()
{
    char A[] = "Python";
    reverseString1(A);
    reverseString2(A);
}

void reverseString1(char A[])
{
    int i = 0, j = -1;
    char reversedString[100]; 
    for(i = 0; A[i] != '\0'; i++);
    i = i - 1;
    for(int j = 0; i >= 0; i--, j++) reversedString[j] = A[i];
    reversedString[j] = '\0';
    cout << reversedString << endl;
}
void reverseString2(char A[])
{
    int i = 0, j = 0;
    for(j = 0; A[j] != '\0'; j++); j--;
    for(i = 0; i < j; i++,j--)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    cout << A << endl;
}