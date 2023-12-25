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