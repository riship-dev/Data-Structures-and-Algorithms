# 150_letsCodeLowerTriangularMatrixInCpp/ColumnMajorMapping

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
  - Dynamically allocates memory for an array `A` of size `n * (n + 1) / 2` to represent the lower triangular matrix.

### Member Function Set:
```cpp
        void set(int i, int j, int value)
        {
            if(i >= j) A[size * (j - 1) - (j - 2) * (j - 1) / 2 + i - j] = value; 
        }
```

- **Set Function:** Sets the value at a specific position `(i, j)` in the lower triangular matrix.
  - Checks if `i >= j` (i.e., within the lower triangle).
  - Uses the column-major formula to calculate the index in the 1D array `A` and assigns `value` to that position.

### Member Function Get:
```cpp
        int get(int i, int j)
        {
            if(i <= j) return A[size * (j - 1) - (j - 2) * (j - 1) / 2 + i - j];
            else return 0;
        }
```

- **Get Function:** Retrieves the value at a specific position `(i, j)` in the lower triangular matrix.
  - Checks if `i <= j` (i.e., within or below the lower triangle).
  - Uses the column-major formula to calculate the index in the 1D array `A` and returns the value at that position. Returns 0 for elements above the lower triangle.

### Member Function Display:
```cpp
        void display()
        {
            for(int i = 1; i <= size; i++)
            {
                for(int j = 1; j <= size; j++)
                {
                    if (i >= j) cout << A[size * (j - 1) - (j - 2) * (j - 1) / 2 + i - j] << " ";
                    else cout << 0 << " ";
                }
                cout << endl;
            }
        }
```

- **Display Function:** Prints the lower triangular matrix.
  - Uses nested loops to traverse the matrix.
  - Prints the value `A` using the column-major formula for elements within or below the lower triangle. Prints 0 for elements above the lower triangle.

### Topics Covered:
- **Class Definition:** Defining a class and its data members.
- **Constructor and Destructor:** Initializing data members and managing dynamic memory.
- **Member Functions:** Set, Get, Display for managing lower triangular matrix operations using the column-major formula.
- **Column-Major Formula:** Utilizing the column-major formula to map 2D coordinates to 1D array indices for storage efficiency and accessing elements in the matrix.