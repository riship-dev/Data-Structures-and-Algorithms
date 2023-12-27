#include <bits/stdc++.h>
using namespace std;

void areAnagrams(char A[], char B[]);
int lenOf(char A[]);

int main()
{
    char
        A[] = "decimal",
        B[] = "medical",
        C[] = "pool",
        D[] = "loop",
        E[] = "more";
    areAnagrams(A, B); cout << endl;
    areAnagrams(C, D); cout << endl;
    areAnagrams(A, C); cout << endl;
    areAnagrams(D, E);
}

int lenOf(char A[])
{
    int i = 0;
    for(i = 0; A[i] != '\0'; i++);
    return i;
}
void areAnagrams(char A[], char B[])
{
    if(lenOf(A) != lenOf(B))
    {
        cout << "Not anagrams (different number of letters)." << endl;
        return;
    }
    char H[26] = {0};
    int i = 0;
    for(i = 0; A[i] != 0; i++) H[A[i] - 97]++;
    for(i = 0; B[i] != 0; i++)
    {
        H[B[i] - 97]--;
        if(H[B[i] - 97] < 0)
        {
            cout << "Not anagrams." << endl;
            return;
        }
    } 
    cout << "Anagrams." << endl;
}

/*
Function Name:
void areAnagrams(char A[], char B[])

    The function is named areAnagrams.
    It takes two character arrays A and B as input and doesn't return anything (void).

Input Length Check:
if(lenOf(A) != lenOf(B))
{
    cout << "Not anagrams (different number of letters)." << endl;
    return;
}
    This block checks if the lengths of strings A and B are different.
    If the lengths are different, it prints a message indicating that they're not anagrams due to having a different number of letters and exits the function using return.

Array Initialization:
char H[26] = {0};
    Initializes an array H of size 26 to store the count of characters.
    Each element of this array corresponds to a character in the English alphabet.

Frequency Counting - First String (Array A):
for(i = 0; A[i] != 0; i++) 
{
    H[A[i] - 97]++;
}
    This loop iterates through characters in string A.
    H[A[i] - 97]++ increments the count of the character encountered in A by using the character's ASCII value minus the ASCII value of 'a' ('a' has an ASCII value of 97) to get the index in the array H.

Frequency Counting - Second String (Array B):
for(i = 0; B[i] != 0; i++)
{
    H[B[i] - 97]--;
    if(H[B[i] - 97] < 0)
    {
        cout << "Not anagrams." << endl;
        return;
    }
} 
    This loop iterates through characters in string B.
    H[B[i] - 97]-- decrements the count of the character encountered in B by using the character's ASCII value minus the ASCII value of 'a' to get the index in the array H.
    It checks if the count of a character in B exceeds the count of the same character in A (as stored in H). If so, it prints "Not anagrams" and exits the function using return.

Final Result:
cout << "Anagrams." << endl;
    If the two strings passed the comparison of character counts, it prints "Anagrams," indicating that the two strings are indeed anagrams of each other.

Topics Covered:
    Character Frequency Counting: Using an array (H) to count the frequency of characters in strings A and B.
    Array Indexing: Using character values (ASCII-based) as indices to access specific elements in the array H.
    String Comparison: Checking if two strings are anagrams by comparing the frequency of characters.
*/