#include <bits/stdc++.h>
using namespace std;

// Template class definition
template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    // Constructor
    Arithmetic(T a, T b);
    // Member function to perform addition
    T add();
    // Member function to perform subtraction
    T sub();
};

// Constructor definition
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

// Member function definition for addition
template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}

// Member function definition for subtraction
template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}

// Main function
int main()
{
    // Creating an instance of the template class with int type
    Arithmetic<int> a1(10, 5);
    cout << "Addition (int): " << a1.add() << endl;
    cout << "Subtraction (int): " << a1.sub() << endl;

    // Creating an instance of the template class with double type
    Arithmetic<double> a2(10.43, 0.07);
    cout << "Addition (double): " << a2.add() << endl;
    cout << "Subtraction (double): " << a2.sub() << endl;
}
