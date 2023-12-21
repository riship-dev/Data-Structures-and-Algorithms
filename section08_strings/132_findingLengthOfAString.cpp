#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[20]; int i;
    cout << "String?: "; gets(s);
    for (i = 0; s[i] != '\0'; i++);
    cout << "Size = " << i;
}