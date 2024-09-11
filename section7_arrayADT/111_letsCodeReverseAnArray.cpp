#include <bits/stdc++.h>
using namespace std;

class Array {
    private:
        int* head;
        int size;
        int length = 0;
    public:
        Array(int size) {
            this->size = size;
            head = new int[size];
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
        void reverse() {
            int i, j, temporary;
            for (i = 0, j = length - 1; i < j; i++, j--) {
                temporary = head[i];
                head[i] = head[j];
                head[j] = temporary;
            }
        }
        ~Array() {
            delete [] head;
        }
};

int main() {
    Array array1(6);
    array1.initialise({1, 2, 3, 4, 5});
    array1.display();

    array1.reverse();
    array1.display();
}