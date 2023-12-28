#include <bits/stdc++.h>
using namespace std;

void changeCase(char A[]);

int main()
{
    char A[] = "WELcOME";
    changeCase(A);
}

void changeCase(char A[])
{
    int i = 0;
    for(i = 0; A[i] != '\0'; i++)
    {
        if(A[i] >= 62 && A[i] <= 90) A[i] += 32;
        else if(A[i] >= 'a' && A[i] <= 122) A[i] -= 32;
    }
    cout << A;
}

/*
Function Name:
void changeCase(char A[])
    The function is named changeCase.
    It takes a character array A as input and doesn't return anything (void).

Case Conversion:
int i = 0;
for(i = 0; A[i] != '\0'; i++)
{
    if(A[i] >= 62 && A[i] <= 90) A[i] += 32;
    else if(A[i] >= 'a' && A[i] <= 122) A[i] -= 32;
}
    Initializes an integer i to 0, which will be used as a counter to traverse the string A.
    Enters a for loop that iterates through each character in the string until it reaches the null character '\0'.
    Inside the loop:
        Checks if the current character is within the ASCII range of uppercase letters (>= 62 and <= 90). If so, it converts it to lowercase by adding 32 to its ASCII value.
        If the character is within the ASCII range of lowercase letters (>= 'a' and <= 122), it converts it to uppercase by subtracting 32 from its ASCII value.

Printing the Modified String:
cout << A;
    After modifying the case of characters in the string, it prints the updated string A.

Topics Covered:
    String Traversal: Using a loop to iterate through each character in a string until the null character '\0' is encountered.
    ASCII Values: Manipulating characters based on their ASCII values to convert between uppercase and lowercase letters.
    Conditional Statements: Using if-else conditions to check the range of ASCII values to determine whether to change the case of characters.
*/