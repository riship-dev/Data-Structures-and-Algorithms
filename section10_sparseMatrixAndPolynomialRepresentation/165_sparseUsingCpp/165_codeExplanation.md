# 165 - Sparse matrix representation

```cpp
#include <bits/stdc++.h>
using namespace std;
```
- This includes the standard C++ library. However, including `<bits/stdc++.h>` is not considered good practice because it is not standard and may not be supported by all compilers. It's better to include the specific headers needed for your program.

```cpp
class Element
{
    public:
        int i;
        int j;
        int x;
};
```
- This defines a class named `Element` representing an element of a sparse matrix. It has three public member variables `i`, `j`, and `x` representing the row index, column index, and value of the matrix element, respectively.

```cpp
class SparseMatrix
{
    private:
        int m;
        int n;
        int nonZeroCount;
        Element *element;
    public:
        SparseMatrix(int m, int n, int nonZeroCount)
        {
            this -> m = m;
            this -> n = n;
            this -> nonZeroCount = nonZeroCount;
            element = new Element[this -> nonZeroCount];
        }
```
- This defines a class named `SparseMatrix` representing a sparse matrix. It has private member variables `m`, `n`, `nonZeroCount`, and a dynamic array `element` of type `Element`.
- The constructor initializes the matrix dimensions (`m` and `n`) and the number of non-zero elements (`nonZeroCount`). It also dynamically allocates an array of `Element` objects of size `nonZeroCount`.

```cpp
        ~SparseMatrix()
        {
            delete [] element;
        }
```
- This is the destructor for the `SparseMatrix` class, which deletes the dynamically allocated memory for the `element` array to avoid memory leaks.

```cpp
        void read()
        {
            cout << "Enter non-zero elements: " << endl;
            for(int i = 0; i < nonZeroCount; i++)
                cin >> element[i].i >> element[i].j >> element[i].x;
        }
```
- This function reads non-zero elements of the sparse matrix from the user. It prompts the user to enter the row index (`i`), column index (`j`), and value (`x`) for each non-zero element.

```cpp
        void display()
        {
            int k = 0;
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(element[k].i == i && element[k].j == j)
                        cout << element[k++].x << " ";
                    else 
                        cout << "0 ";
                }
                cout << endl;
            }
        }
```
- This function displays the sparse matrix. It iterates through the matrix and prints the non-zero elements using the values stored in the `element` array. If there is no non-zero element at a particular position, it prints 0.

```cpp
int main()
{
    SparseMatrix s1(5, 5, 5);
    s1.read();
    s1.display();
}
```
- In the `main` function, an instance of the `SparseMatrix` class (`s1`) is created with dimensions 5x5 and a specified number of non-zero elements (5 in this case). The `read` function is then called to input the non-zero elements from the user, and finally, the `display` function is called to print the sparse matrix.