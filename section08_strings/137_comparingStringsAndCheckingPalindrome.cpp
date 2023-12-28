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

/*
Function Name:
void compare(char A[], char B[])
    The function is named compare.
    It takes two character arrays A and B as input and doesn't return anything (void).

String Comparison Loop:
int i = 0;
for(int i = 0; A[i] != '\0', B[i] != '\0'; i++)
    if(A[i] != B[i]) break;
    Initializes an integer i.
    Enters a for loop to compare characters in both strings A and B.
    The loop continues as long as both A[i] and B[i] are not null characters '\0'.
    Inside the loop:
        Compares characters at each position in A and B.
        If there's a mismatch (A[i] != B[i]), the loop is exited using break.

Comparison of Final Characters:
if(A[i] == B[i]) cout << "Equal" << endl;
else if(A[i] < B[i]) cout << "Smaller" << endl;
else cout << "Greater" << endl;
    Compares the characters at the position where the loop terminated (A[i] and B[i]):
        If they are equal, it prints "Equal".
        If A[i] is less than B[i] (according to ASCII values), it prints "Smaller".
        If A[i] is greater than B[i] (according to ASCII values), it prints "Greater".

Topics Covered:
    String Comparison: Comparing two strings character by character until a mismatch or the end of either string is reached.
    Loop Termination: Using a loop to compare characters until a break condition is met.
    Conditional Statements: Determining the relationship between the final characters of the strings (equal, smaller, or greater) based on their ASCII values.
*/

/*
Function Name:
void isPalindrome(char A[])
    The function is named isPalindrome.
    It takes a character array A as input and doesn't return anything (void).

Initializing Variables and Finding String Length:
int i = 0, j = 0;
while(A[j] != '\0') j++;
j--;
    Initializes integers i and j.
    Enters a while loop to find the length of the string by iterating through A until it reaches the null character '\0'.
    After the loop, decrements j by 1 to point to the last valid character in the string.

Checking for Palindrome:
for(i = 0; i < j; i++, j--)
{
    if(A[i] != A[j]) 
    {
        cout << "Not palindrome" << endl;
        return;
    }
}
    Enters a for loop where i starts from the beginning (0) and j starts from the end (last character before the null character).
    As long as i is less than j (indicating that the characters haven't met in the middle):
        Compares A[i] with A[j].
        If there's a mismatch, it prints "Not palindrome" and returns from the function immediately.

Printing Result:
cout << "Palindrome" << endl;
    If the loop completes without finding any mismatch, it prints "Palindrome", indicating that the string is a palindrome.

Topics Covered:
    String Traversal: Using loops to iterate through the string to determine its length and compare characters.
    Palindrome Check: Comparing characters from both ends of the string to check if it reads the same forwards and backwards.
    Looping and Control Flow: Using loops and conditional statements to control the flow and determine whether a string is a palindrome or not.
*/