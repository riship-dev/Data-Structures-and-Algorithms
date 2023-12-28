#include <bits/stdc++.h>
using namespace std;

bool stringValidator(char name[]);

int main()
{
    char name1[] = "Ani?123";
    char name2[] = "Ani123";
    
    if(stringValidator(name1)) cout << name1 << " valid." << endl;
    else cout << name1 << " not valid." << endl;

    if(stringValidator(name2)) cout << name2 << " valid." << endl;
    else cout << name2 << " not valid." << endl; 
}

bool stringValidator(char name[])
{
    int i = 0;
    for(i = 0; name[i] != '\0'; i++)
    {
        if
        (
            !(name[i] >= 65 && name[i] <= 90)
            &&
            !(name[i] >= 97 && name[i] <= 122)
            &&
            !(name[i] >= 48 && name[i] <= 57)
        ) return 0;
    }
    return 1;
}

/*
Function Name:
bool stringValidator(char name[])
    The function is named stringValidator.
    It takes a character array name as input and returns a boolean value (true or false).

Initializing Variables:
int i = 0;
    Initializes an integer i to 0, which will be used as a counter to traverse the string name.

Character Validation Loop:
for(i = 0; name[i] != '\0'; i++)
{
    if
    (
        !(name[i] >= 65 && name[i] <= 90)
        &&
        !(name[i] >= 97 && name[i] <= 122)
        &&
        !(name[i] >= 48 && name[i] <= 57)
    ) return 0;
}
    Enters a for loop that iterates through each character in the string until it reaches the null character '\0'.
    Inside the loop:
        Checks if the current character is not an uppercase letter (A-Z), not a lowercase letter (a-z), and not a digit (0-9).
        If the character doesn't meet any of these conditions (i.e., it's not an alphabet or digit), the function immediately returns false (0), indicating that the string contains an invalid character.

Returning Validation Result:
return 1;
    If the loop completes without encountering any invalid characters, the function returns true (1), indicating that the string contains only valid characters (uppercase letters, lowercase letters, or digits).

Topics Covered:
    String Traversal: Using a loop to iterate through each character in a string until the null character '\0' is encountered.
    Character Validation: Checking characters against specific criteria (uppercase letters, lowercase letters, and digits) to ensure they meet certain conditions.
    Logical Operators: Using && (logical AND) and ! (logical NOT) operators to combine and negate conditions for character validation.
*/