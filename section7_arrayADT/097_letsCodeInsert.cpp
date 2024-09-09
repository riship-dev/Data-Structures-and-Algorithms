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
        void insert(int value, int index) {
            if (index >= 0 && index <= length && length < size) {
                for(int i = length - 1; i >= index; i--) {
                    head[i + 1] = head[i];
                }
                head[index] = value;
                length++;
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

    array1.insert(101, 2);
    array1.display();
}