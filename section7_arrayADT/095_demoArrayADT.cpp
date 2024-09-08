#include <bits/stdc++.h>
using namespace std;

class Array {
    private:
        int* head;
        int size;
        int length;
    public:
        Array(int size) {
            head = new int[size];
            this -> size = size;
            length = 0;
        }
        void initialise(vector <int> array) {
            length = array.size();
            for (int i = 0; i < length; i++) {
                head[i] = array[i];
            }
        }
        void display() {
            for (int i = 0; i < length; i++) {
                cout << head[i] << " ";
            }
            cout << endl;
        }
        ~Array() {delete [] head;}
};

int main() {
    Array array1(10);
    array1.initialise({1, 2, 3, 4, 5});
    array1.display();
}