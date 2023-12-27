#include <bits/stdc++.h>
using namespace std;

void findDuplicatesBitwise(char A[]);

int main()
{
    char
        A[] = "finding",
        B[] = "test",
        C[] = "gym";
    findDuplicatesBitwise(A);
    cout << endl;
    findDuplicatesBitwise(B);
    cout << endl;
    findDuplicatesBitwise(C);
    cout << endl;
}

void findDuplicatesBitwise(char A[])
{
    long int H = 0, x = 0;
    int i = 0;
    for(i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x <<= (A[i] - 97);
        if((x & H) > 0) cout << A[i] << " is a duplicate." << endl;
        else H = x | H; 
    }
}

/*
Function Name:
void findDuplicatesBitwise(char A[])
    This function is named findDuplicatesBitwise. It takes a character array A as input and doesn't return anything (void).

Variables:
long int H = 0, x = 0;
int i = 0;
    H and x are initialized to 0, while i (the loop counter) starts at 0.

Loop:
for(i = 0; A[i] != '\0'; i++)
    This for loop iterates through the characters in the array A until it reaches the null character '\0', which marks the end of the string.

Bitwise Operations:
x = 1;
x <<= (A[i] - 97);
    Here, x is set to 1 and then left-shifted by (A[i] - 97). (A[i] - 97) calculates the position of the character in the alphabet by subtracting the ASCII value of 'a' (97 for lowercase 'a') from the current character's ASCII value.

Conditionals:
if((x & H) > 0) cout << A[i] << " is a duplicate." << endl;
else H = x | H;
    (x & H) performs a bitwise AND operation between x and H. If the result is greater than 0 (i.e., if the common bits between x and H are non-zero), it means the character is a duplicate (since it's already been encountered before). It prints a message indicating that the character is a duplicate.
    If the character is not a duplicate, it proceeds to the else statement. H = x | H performs a bitwise OR operation between x and H, effectively setting the corresponding bit for this character in H.

Function Overview:
    The function uses a bit manipulation technique to identify duplicate characters in the string.
    It employs a long int H as a bit vector to keep track of encountered characters.
    For each character in the input string, it sets a bit in x based on the character's position in the alphabet.
    It then checks if the bit corresponding to that character is already set in H. If yes, it's a duplicate; otherwise, it sets the bit in H and continues to the next character.
    This approach assumes the string contains only lowercase alphabetical characters ('a' to 'z'). The 97 used in (A[i] - 97) corresponds to the ASCII value of 'a'.

Topics Covered:
    Bitwise Operations: Specifically, the use of bitwise left-shift (<<), bitwise AND (&), and bitwise OR (|) operations.
    Bit Manipulation: Storing and checking the presence of elements (characters, in this case) using bits.

Remember, this function is tailored for lowercase alphabetical characters. Adapting it to work with other characters or character sets would require adjustments in the range of values and bit operations used.
*/