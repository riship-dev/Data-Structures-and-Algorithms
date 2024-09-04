#include <bits/stdc++.h>
using namespace std;

void swap_byValue(int a, int b) {
    int temporary = a;
    a = b;
    b = temporary; 
}
void swap_byAddress(int* a, int *b) {
    int temporary = *a;
    *a = *b;
    *b = temporary; 
}
void swap_byReference(int& a, int& b) {
    int temporary = a; 
    a = b;
    b = temporary;
}

int main() {
    int a = 1, b = 2;
    swap_byValue(a, b); //Doesn't affect a and b
    cout << a << " " << b << endl;

    swap_byAddress(&a, &b); //Affects a and b as addresses are passed; Values at addresses are swapped. 
    cout << a << " " << b << endl;

    swap_byReference(a, b); // Affects a and b as their references are passed
    cout << a << " " << b << endl;
}