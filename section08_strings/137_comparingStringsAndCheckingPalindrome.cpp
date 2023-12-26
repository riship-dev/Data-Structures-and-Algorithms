#include <bits/stdc++.h>
using namespace std;

void compare(char A[], char B[]);
void isPalindrome(char A[]);

int main()
{
    char A[] = "Europe";
    char B[] = "Asia";
    char C[] = "Europe";
    //compare(A, B);
    //compare(A, C);
    //compare(B, A);

    char D[] = "racecar";
    char E[] = "Doofenshmirtz";
    isPalindrome(D);
    isPalindrome(E);
}

void compare(char A[], char B[])
{
    int i = 0;
    for(int i = 0; A[i] != '\0', B[i] != '\0'; i++)
        if(A[i] != B[i]) break;

    if(A[i] == B[i]) cout << "Equal" << endl;
    else if(A[i] < B[i]) cout << "Smaller" << endl;
    else cout << "Greater" << endl;
}
void isPalindrome(char A[])
{
    int i = 0, j = 0;
    while(A[j] != '\0') j++; j--;
    for(i = 0; i < j; i++, j--)
    {
        if(A[i] != A[j]) 
        {
            cout << "Not palindrome" << endl;
            return;
        }
    }
    cout << "Palindrome" << endl;
}