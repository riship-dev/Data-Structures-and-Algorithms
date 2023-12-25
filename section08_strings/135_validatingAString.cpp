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