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