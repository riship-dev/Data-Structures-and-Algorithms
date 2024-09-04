#include <bits/stdc++.h>
using namespace std;

int main() {
    int array1[5]; //Array declaration; size = 5 * 4 = 20 (int)
    int array2[] = {1, 2, 3}; //Array declaration + initialisation
    int array3[10] = {1, 2, 3}; //Empty positions filled by 0
    
    //Display array elements
    for(int i = 0; i < 10; i++) {
        cout << array3[i] << " ";
    }
    cout << endl;
    for(int arrayElement: array3) {
        cout << arrayElement << " ";
    }
}