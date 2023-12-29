# 150_letsCodeLowerTriangularMatrixInCpp/rowMajorMapping

### Class Definition:
```cpp
class LowerTriangularMatrix
{
    private:
        int *A;
        int size;
    public:
        LowerTriangularMatrix(int n)
        {
            size = n;
            A = new int[n * (n + 1) / 2];
        }
```

- **Class Declaration:** Defines a class named `LowerTriangularMatrix`.
- **Private Members:** Contains private data members: `A` (pointer to int) and `size` (int).
- **Constructor:** Defines a constructor that takes an integer `n` as input.
  - Initializes the `size` member with the given `n`.
  - Dynamically allocates memory for an array `A` of size `n * (n + 1) / 2` to store lower triangular matrix elements.

### Member Function Set:
```cpp
        void set(int i, int j, int value)
        {
            if(i >= j) A[i * (i - 1) / 2 + j - 1] = value; 
        }
```
- **Set Function:** Sets the value at a specific position `(i, j)` in the lower triangular matrix.
  - Checks if `i` is greater than or equal to `j` (elements reside in or below the main diagonal).
  - If true, sets the value `value` at the calculated index using the formula.

### Member Function Get:
```cpp
        int get(int i, int j)
        {
            if(i <= j) return A[i * (i - 1) / 2 + j - 1];
            else return 0;
        }
```
- **Get Function:** Retrieves the value at a specific position `(i, j)` in the lower triangular matrix.
  - Checks if `i` is less than or equal to `j` (valid elements reside in or below the main diagonal).
  - If true, returns the value at the calculated index using the formula, otherwise returns 0 for elements above the main diagonal.

### Member Function Display:
```cpp
        void display()
        {
            for(int i = 1; i <= size; i++)
            {
                for(int j = 1; j <= size; j++)
                {
                    if (i >= j) cout << A[i * (i - 1) / 2 + j - 1] << " ";
                    else cout << 0 << " ";
                }
                cout << endl;
            }
        }
```
- **Display Function:** Prints the lower triangular matrix.
  - Uses nested loops to traverse the matrix.
  - Prints the stored value at the calculated index using the formula for valid elements, otherwise prints 0 for elements above the main diagonal.

### Destructor:
```cpp
        ~LowerTriangularMatrix(){delete []A;}
};
```
- **Destructor Function:** Releases memory allocated for the array `A` when the object goes out of scope.
  - Deletes the dynamically allocated array using `delete []A`.

### Topics Covered:
- **Class Definition:** Defining a class and its data members.
- **Constructor:** Initializing data members and dynamically allocating memory.
- **Member Functions:** Set, Get, Display for managing lower triangular matrix operations.
- **Destructor:** Releasing dynamically allocated memory when the object is destroyed.

PS: here i and j from user always starts at 1, not 0.