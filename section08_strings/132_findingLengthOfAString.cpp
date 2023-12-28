#include <bits/stdc++.h>
using namespace std;

int lenOf(char A[])
{
    int i = 0;
    for(i = 0; A[i] != '\0'; i++);
    return i;
}

int main()
{
    char s[20]; int i;
    cout << "String?: "; gets(s);
    cout << lenOf(s);
}

/*
Function Name:
int lenOf(char A[])
    The function is named lenOf.
    It takes a character array A as input and returns an integer representing the length of the string.

Length Calculation:
int i = 0;
for(i = 0; A[i] != '\0'; i++);
    Initializes an integer i to 0, which will be used as a counter.
    Enters a for loop that iterates through the elements of the character array A.
    The loop continues as long as the character at index i of array A is not the null character '\0'.
    Inside the loop:
        Increments the counter i to track the length of the string.
        Continues iterating until it encounters the null character '\0', which marks the end of the string.

Returning the Length:
return i;
    After the loop ends, it returns the value of i, which represents the length of the string.

Topics Covered:
    String Traversal: Using a loop to go through each character in a string until the null character '\0' is encountered, marking the end of the string.
    Loop Control: Using a for loop without an internal body (the loop is empty after the semicolon) to increment the counter until a condition is met.
    String Length Determination: Counting the number of characters in a string by iterating through it and tracking the count until the null character is reached.
*/