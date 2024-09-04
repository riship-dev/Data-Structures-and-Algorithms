#include <bits/stdc++.h>
using namespace std;

void displayArray(int* array, int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
int* declareArray(int size) {
    return new int[size];
}

int main() {
    int array1[] = {1, 2, 3, 4, 5}, size = 5;
    displayArray(array1, size); //passing array as parameter

    int* pointerTo_anArray = declareArray(size); //returns an array pointer
    pointerTo_anArray[0] = 10;
    displayArray(pointerTo_anArray, size);
}