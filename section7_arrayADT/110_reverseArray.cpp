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
        void displayAll() {
            for (int i = 0; i < size; i++) {
                cout << head[i] << " ";
            }
            cout << endl;
        }
        void leftShift() {
            if (length > 0) {
                for(int i = 0; i < length - 1; i++) {
                    head[i] = head[i + 1];
                }
                head[length - 1] = 0;
                length--;
            }
        }
        void rotate() {
            if (length > 0) {
                head[size - 1] = head[0];
                for(int i = 0; i < length - 1; i++) {
                    head[i] = head[i + 1];
                }
                head[length - 1] = 0;
                length--;
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

    array1.rotate();
    array1.displayAll();
}