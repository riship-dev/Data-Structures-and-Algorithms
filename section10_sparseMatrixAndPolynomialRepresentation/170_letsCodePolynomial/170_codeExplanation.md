# 170 - Polynomial: Representation, evaluation and addition

```cpp
#include <bits/stdc++.h>
using namespace std;
```
These lines include the necessary header files for standard input/output and other standard C++ functionalities.

```cpp
class Term
{
    private:
        int coefficient;
        int exponent;
        friend class Polynomial;
};
```
Here, a class `Term` is declared, representing a term in a polynomial. It has private members `coefficient` and `exponent`, and it is declared as a friend class of the `Polynomial` class, allowing the `Polynomial` class to access its private members.

```cpp
class Polynomial
{
    private:
        int termCount;
        class Term *terms;
    public:
        Polynomial()
        {
            cout << "Number of terms?: ";
            cin >> termCount;
            terms = new Term[termCount];
        }
```
This is the definition of the `Polynomial` class. It has private members `termCount` and a pointer to an array of `Term` objects (`*terms`). The default constructor (`Polynomial()`) prompts the user for the number of terms and dynamically allocates an array of `Term` objects to store the terms.

```cpp
        Polynomial(int termCount)
        {
            this -> termCount = termCount;
            terms = new Term[this -> termCount];
        }
```
This is an overloaded constructor that allows the user to create a polynomial with a specific number of terms.

```cpp
        void initialise()
        {
            for(int i = 0; i < termCount; i++)
            {
                cout << "Enter coefficient " << i + 1 << ": ";
                cin >> terms[i].coefficient;
                cout << "Enter exponent " << i + 1 << ": ";
                cin >> terms[i].exponent;
            }
        }
```
The `initialise()` function is used to input coefficients and exponents for each term in the polynomial.

```cpp
        void display()
        {
            for(int i = 0; i < termCount; i++)
            {
                cout << terms[i].coefficient << "x^" << terms[i].exponent;
                if(i != termCount - 1) cout << " + ";
            }
            cout << endl;
        }
```
The `display()` function prints the polynomial in a human-readable form.

```cpp
        int evaluate(int x)
        {
            int sum = 0;
            for(int i = 0; i < termCount; i++)
                sum += terms[i].coefficient * pow(x, terms[i].exponent);
            return sum;
        }
```
The `evaluate()` function calculates the value of the polynomial for a given value of `x`.

```cpp
        Polynomial add(Polynomial p2)
        {
            Polynomial *sum = new Polynomial(termCount + p2.termCount);
            int i, j, k; i = j = k = 0;
            while(i < termCount && j < p2.termCount)
            {
                if(terms[i].exponent > p2.terms[j].exponent)
                    sum -> terms[k++] = terms[i++];
                else if(terms[i].exponent < p2.terms[j].exponent)
                    sum -> terms[k++] = p2.terms[j++];
                else
                {
                    sum -> terms[k].exponent = terms[i].exponent;
                    sum -> terms[k++].coefficient = terms[i++].coefficient + p2.terms[j++].coefficient;
                }
            }
            for(;i < termCount; i++) sum -> terms[k++] = terms[i++];
            for(;j < termCount; j++) sum -> terms[k++] = p2.terms[j++];
            sum -> termCount = k;
            return *sum;
        }
```
The `add()` function performs the addition of two polynomials. It creates a new polynomial (`sum`) with enough space to accommodate the result. It then iterates through both polynomials and combines terms with the same exponent. After the loop, it copies any remaining terms from both polynomials. Finally, it updates the `termCount` of the `sum` polynomial and returns it.

```cpp
        ~Polynomial()
        {
            delete [] terms;
        }
};
```
The destructor (`~Polynomial()`) is responsible for releasing the dynamically allocated memory for the `terms` array.

```cpp
int main()
{
    Polynomial p1; p1.initialise();
    Polynomial p2; p2.initialise();
    p1.display();
    p2.display();
    //cout << endl << p1.evaluate(5);
    Polynomial sum = p1.add(p2);
    sum.display();

    p1.~Polynomial();
    p2.~Polynomial();
    sum.~Polynomial();
}
```
In the `main()` function, two polynomials `p1` and `p2` are created, initialized, and displayed. The `add()` function is then called to add `p1` and `p2`, and the result is displayed. Finally, the destructors are explicitly called to release the dynamically allocated memory, though this is generally not necessary as the destructors will be automatically called when the objects go out of scope. Note that the commented-out `cout` line for evaluating the polynomial at a specific value of `x` is not active in the provided code.