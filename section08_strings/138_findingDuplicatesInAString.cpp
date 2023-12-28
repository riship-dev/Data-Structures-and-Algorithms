#include <bits/stdc++.h>
using namespace std;

void findDuplicates(char A[]);
void findDuplicatesUsingHashTable(char A[]);

int main()
{
    char A[] = "finding";
    //findDuplicates(A);
    findDuplicatesUsingHashTable(A);
}

void findDuplicates(char A[])
{
    int i = 0, j = 0;
    for(i = 0; A[i] != '\0'; i++)
    {
        int reps = 0; 
        for(j = i + 1; A[j] != '\0'; j++)
        {
            if(A[i] == A[j]) reps++;
        }
        cout << A[i] << " has " << reps << " duplicate(s)" << endl;
    }
}
void findDuplicatesUsingHashTable(char A[])
{
    int hashTable[26] = {0}, i = 0;
    for(i = 0; A[i] != '\0'; i++) hashTable[A[i] - 97]++;
    for(i = 0; i < 26; i++)
        if(hashTable[i] > 1) 
            cout << (char) (i + 97) << " has " << hashTable[i] << " duplicates" << endl;
}

/*
Function Name:
void findDuplicates(char A[])

    The function is named findDuplicates.
    It takes a character array A as input and doesn't return anything (void).

Nested Loop for Finding Duplicates:
int i = 0, j = 0;
for(i = 0; A[i] != '\0'; i++)
{
    int reps = 0;
    for(j = i + 1; A[j] != '\0'; j++)
    {
        if(A[i] == A[j]) reps++;
    }
    cout << A[i] << " has " << reps << " duplicate(s)" << endl;
}
    Initializes integers i and j.
    Enters an outer for loop that iterates through each character in the string until it reaches the null character '\0'.
    Inside this loop:
        Initializes reps (representing repetitions) to zero.
        Enters an inner for loop that starts from the next character after A[i] and iterates till the end of the string (A[j] != '\0').
        Inside the inner loop:
            Compares A[i] with characters succeeding it (starting from A[i+1] onwards).
            If a character matches A[i], increments the reps counter.
        After the inner loop, prints the character A[i] and the number of times it was found as duplicates (reps).

Topics Covered:
    String Traversal: Using nested loops to iterate through the string and compare characters.
    Finding Duplicates: Comparing characters within the string to identify and count duplicates of each character.
    Nested Loops: Using a loop within another loop to perform comparisons and count duplicates for each character in the string.
*/

/*
Function Name:
void findDuplicatesUsingHashTable(char A[])

    The function is named findDuplicatesUsingHashTable.
    It takes a character array A as input and doesn't return anything (void).

Initializing Variables and Hash Table:
int hashTable[26] = {0}, i = 0;

    Initializes an integer array hashTable of size 26, all set to 0.
    Initializes integer i.

Hashing and Counting Characters:
for(i = 0; A[i] != '\0'; i++) hashTable[A[i] - 97]++;

    Enters a for loop that iterates through each character in the string until it reaches the null character '\0'.
    Inside the loop:
        Converts the character A[i] into an index value for the hashTable array by subtracting the ASCII value of 'a' (97 for lowercase 'a').
        Increments the count of characters at the respective index in the hashTable.

Checking and Printing Duplicates:
for(i = 0; i < 26; i++)
    if(hashTable[i] > 1) 
        cout << (char) (i + 97) << " has " << hashTable[i] << " duplicates" << endl;
    Enters another for loop from 0 to 25 (representing the 26 alphabets).
    Inside this loop:
        Checks if the count of characters at the hashTable[i] index is greater than 1.
        If there are duplicates (hashTable[i] > 1), it prints the character corresponding to the index i in the hash table ((char) (i + 97) converts it back to the corresponding lowercase character) and the count of duplicates.

Topics Covered:
    Hashing Technique: Using an array as a hash table to count occurrences of characters.
    Character Mapping: Mapping characters to indices in the hash table for counting.
    Iterating Through Hash Table: Using loops to traverse the hash table to identify and print characters with duplicate occurrences.
*/