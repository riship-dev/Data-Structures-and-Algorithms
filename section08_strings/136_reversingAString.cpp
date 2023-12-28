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

/*
Function Name:
void reverseString1(char A[])
    The function is named reverseString1.
    It takes a character array A as input and doesn't return anything (void).

Initializing Variables and Creating Reversed String Array:
int i = 0, j = -1;
char reversedString[100];
    Initializes integers i and j and declares a character array reversedString of size 100.
    i will be used as a counter to find the length of string A.
    j is initialized to -1, but it's not used in this function, and it gets redefined in the loop.

Finding String Length:
for(i = 0; A[i] != '\0'; i++);
    Enters a for loop that iterates through each character in the string until it reaches the null character '\0'.
    Increments i until it counts the total number of characters in string A.

Reversing the String:
i = i - 1;
for(int j = 0; i >= 0; i--, j++) reversedString[j] = A[i];
    Decrements i by 1 to point to the last character of the string.
    Enters another for loop where:
        i-- decrements i (from the end of the string towards the beginning).
        j++ increments j (from the start of reversedString towards the end).
        Copies each character from the original string A into reversedString in reverse order.

Null-Terminating the Reversed String:
reversedString[j] = '\0';
    Adds a null character '\0' at the end of the reversedString array to mark its end.

Printing the Reversed String:
cout << reversedString << endl;
    Prints the reversed string to the console.

Topics Covered:
    String Traversal: Using a loop to find the length of the string and to reverse its content.
    Array Manipulation: Reversing the string by copying characters from one array to another in reverse order.
    String Termination: Null-terminating the reversed string to ensure it ends properly.
*/

/*
Function Name:
void reverseString2(char A[])
    The function is named reverseString2.
    It takes a character array A as input and doesn't return anything (void).

Initializing Variables and Finding String Length:
int i = 0, j = 0;
for(j = 0; A[j] != '\0'; j++);
j--;
    Initializes integers i and j.
    Enters a loop to find the length of the string by iterating through A until it reaches the null character '\0'.
    After the loop, decrements j by 1 to point to the last valid character in the string.

Reversing the String:
for(i = 0; i < j; i++,j--)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
    Enters a for loop where i starts from the beginning (0) and j starts from the end (last character before the null character).
    As long as i is less than j (indicating that the characters haven't met in the middle):
        Swaps A[i] with A[j] to reverse the characters in-place.
        Uses a temporary variable temp to facilitate the swap operation.

Printing the Reversed String:
cout << A << endl;
    Prints the reversed string to the console.

Topics Covered:
    String Traversal: Using loops to iterate through the string to determine its length and reverse its content.
    Array Manipulation: Reversing the string by swapping characters within the same array.
    Pointers and Indices: Using indices i and j to traverse the string and perform the swapping operation.
*/