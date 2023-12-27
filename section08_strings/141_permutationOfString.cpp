#include <bits/stdc++.h>
using namespace std;

void permutationsString(char A[], int k);
void swap( char* x, char *y);
void permutationsSwapping(char A[], int l, int h);

int main()
{
    //char A[] = "constantinople";
    char B[] = "abc";

    permutationsString(B, 0);
    cout << endl;    
    int i = 0;
    for(i = 0; B[i] != '\0'; i++);
    permutationsSwapping(B, 0, i - 1);
}

void permutationsString(char S[], int k)
{
    static int A[20] = {0};
    static char result[20];
    int i = 0;
    if(S[k] == '\0')
    {
        result[k] = '\0';
        cout << result << endl;
    }
    else
        for(i = 0; S[i] != '\0'; i++)
            if(A[i] == 0)
            {
                result[k] = S[i];
                A[i] = 1;
                permutationsString(S, k + 1);
                A[i] = 0; 
            }
}
void swap( char* x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permutationsSwapping(char S[], int l, int h)
{
    int i = 0;
    if(l == h) cout << S << endl;
    else
        for(i = l; i <= h; i++)
        {
            swap(S[l], S[i]);
            permutationsSwapping(S, l + 1, h);
            swap(S[l], S[i]);
        }
}

/*
Function Name:
void permutationsString(char S[], int k)
    The function is named permutationsString.
    It takes a character array S and an integer k as input and doesn't return anything (void).

Static Arrays:
static int A[20] = {0};
static char result[20];

    A is an array of integers used to track whether a character in S has been used in the current permutation. Initialized to all zeros.
    result is an array of characters used to store each permutation result. Initialized to empty characters ('\0').

Recursion - Base Case:
if(S[k] == '\0')
{
    result[k] = '\0';
    cout << result << endl;
}
    Checks if the character at position k in the string S is the null character '\0'.
    If so, it means the permutation for the current combination is complete, so it adds a null character to the result array and prints the permutation.

Recursive Permutation Generation:
else
    for(i = 0; S[i] != '\0'; i++)
        if(A[i] == 0)
        {
            result[k] = S[i];
            A[i] = 1;
            permutationsString(S, k + 1);
            A[i] = 0; 
        }
    If the base case isn't met, it enters the else block to proceed with further permutations.
    It loops through each character in the string S.
    Checks if the character at index i has not been used (A[i] == 0).
    If the character has not been used:
        Adds the character to the result array at position k.
        Marks the character as used by setting A[i] = 1.
        Recursively calls permutationsString with k + 1 to generate the next position of the permutation.
        After the recursive call returns, resets A[i] to 0 to allow the character to be used in other permutations.

Topics Covered:
    Recursion: The function uses recursion to generate permutations of the input string S.
    Backtracking: Using the array A to keep track of characters used in the current permutation and resetting them for further permutations.
    String Manipulation: Building and printing permutations using character arrays.
    Looping through Strings: Iterating through characters in a string until the null character '\0' is encountered.
*/

/*
Function Name:
void permutationsSwapping(char S[], int l, int h)
    The function is named permutationsSwapping.
    It takes a character array S, an integer l (representing the left index), and an integer h (representing the right index) as input. It doesn't return anything (void).

Recursion and Base Case:
int i = 0;
if(l == h) cout << S << endl;
    Checks if l (left index) is equal to h (right index).
    If l is equal to h, it means a single permutation is complete, so it prints the permutation represented by the string S.

Recursive Permutation Generation:
else
    for(i = l; i <= h; i++)
    {
        swap(S[l], S[i]);
        permutationsSwapping(S, l + 1, h);
        swap(S[l], S[i]);
    }
    If the base case isn't met, it enters the else block to proceed with further permutations.
    It loops through a range from l to h.
    For each iteration of the loop:
        Swaps the characters at indices l and i in the string S. This action effectively chooses a character at position l and then fixes it while generating permutations for the rest of the string.
        Recursively calls permutationsSwapping to generate permutations for the substring from l + 1 to h.
        After the recursive call returns, it swaps back the characters at indices l and i. This step is crucial for backtracking and maintaining the original order of characters while exploring different permutations.

Topics Covered:
    Recursion: The function uses recursion to generate permutations of the input string S.
    Backtracking: Swapping elements back to their original positions after exploring a certain branch of the permutation tree.
    String Manipulation: Generating permutations by swapping characters within the string.
    Looping through a Range: Iterating through a range of indices (l to h) to generate different permutations by fixing characters at different positions
*/