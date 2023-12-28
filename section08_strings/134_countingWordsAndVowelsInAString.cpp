#include <bits/stdc++.h>
using namespace std;

void vowelCounter();
void wordCounter();

int main()
{
    //vowelCounter();
    //cout << "\n\n";
    wordCounter();
}

void vowelCounter()
{
    char A[] = "WELcOME123";
    int i = 0, vowelCount = 0, consonantCount = 0;
    for(i = 0; A[i] != '\0'; i++)
    {
        if
        (
            A[i] == 'a' || 
            A[i] == 'e' ||
            A[i] == 'i' ||
            A[i] == 'o' ||
            A[i] == 'u' ||
            A[i] == 'A' || 
            A[i] == 'E' ||
            A[i] == 'I' ||
            A[i] == 'O' ||
            A[i] == 'U'
        ) vowelCount++;
        else if((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122)) consonantCount++;
    }
    cout << "vowelCount = " << vowelCount << endl;
    cout << "consonantCount = " << consonantCount;
}
void wordCounter()
{
    char B[] = "How are      you?";
    int i = 0, wordCount = 1;
    for(i = 0; B[i] != '\0'; i++)
    {
        if(B[i] == ' ' && B[i - 1] != ' ')
        {
            wordCount++;
        }
    }
    cout << wordCount;   
}

/*
Function Name:
void vowelCounter()
    The function is named vowelCounter.
    It doesn't take any arguments and doesn't return anything (void).

Initializing Variables:
char A[] = "WELcOME123";
int i = 0, vowelCount = 0, consonantCount = 0;
    Initializes a character array A with the string "WELcOME123".
    Initializes integers i, vowelCount, and consonantCount to zero.
    i will be used as a counter to iterate through the string, while vowelCount and consonantCount will store the counts of vowels and consonants, respectively.

Vowel and Consonant Counting:
for(i = 0; A[i] != '\0'; i++)
{
    if
    (
        A[i] == 'a' || 
        A[i] == 'e' ||
        A[i] == 'i' ||
        A[i] == 'o' ||
        A[i] == 'u' ||
        A[i] == 'A' || 
        A[i] == 'E' ||
        A[i] == 'I' ||
        A[i] == 'O' ||
        A[i] == 'U'
    ) vowelCount++;
    else if((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122)) consonantCount++;
}
    Enters a for loop that iterates through each character in the string until it reaches the null character '\0'.
    Inside the loop:
        Checks if the current character is a vowel (either lowercase or uppercase) and increments vowelCount accordingly.
        Otherwise, if the character is an alphabet (either uppercase or lowercase), it's considered a consonant, and consonantCount is incremented.

Printing Counts:
cout << "vowelCount = " << vowelCount << endl;
cout << "consonantCount = " << consonantCount;
    After counting the vowels and consonants in the string, it prints the counts of vowels and consonants.

Topics Covered:
    String Traversal: Using a loop to iterate through each character in a string until the null character '\0' is encountered.
    Conditional Statements: Using if-else conditions to check if a character is a vowel, an uppercase or lowercase alphabet, and incrementing respective counters.
    Character Comparison: Checking for vowels and alphabets by comparing characters against specific values or ASCII ranges.
*/

/*
Function Name:
void wordCounter()
    The function is named wordCounter.
    It doesn't take any arguments and doesn't return anything (void).

Initializing Variables:
char B[] = "How are      you?";
int i = 0, wordCount = 1;
    Initializes a character array B with the string "How are you?".
    Initializes integers i and wordCount to zero and one, respectively.
    i will be used as a counter to iterate through the string, while wordCount will store the count of words in the string.

Word Counting:
for(i = 0; B[i] != '\0'; i++)
{
    if(B[i] == ' ' && B[i - 1] != ' ')
    {
        wordCount++;
    }
}
    Enters a for loop that iterates through each character in the string until it reaches the null character '\0'.
    Inside the loop:
        Checks if the current character is a space ' ' (B[i] == ' ') and the previous character is not a space (B[i - 1] != ' ').
        If both conditions are met, it means a new word has started, so it increments the wordCount.

Printing Word Count:
cout << wordCount;
    After counting the words in the string, it prints the total word count.

Topics Covered:
    String Traversal: Using a loop to iterate through each character in a string until the null character '\0' is encountered.
    Word Counting Logic: Counting words based on spaces and non-repetition of consecutive spaces to detect word boundaries.
    Conditional Statements: Using if conditions to check for spaces and their positions to identify word boundaries and increment the word count accordingly.
*/