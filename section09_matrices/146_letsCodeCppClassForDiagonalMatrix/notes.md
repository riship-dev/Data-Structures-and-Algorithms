#146_letsCodeCppClassForDiagonalMatrix

### Class Definition:
```cpp
class DiagonalMatrix
{
    private:
        int *A;
        int size;
    public:
        DiagonalMatrix(int n)
        {
            size = n;
            A = new int[n];
        }
```

- **Class Declaration:** Defines a class named `DiagonalMatrix`.
- **Private Members:** Contains private data members: `A` (pointer to int) and `size` (int).
- **Constructor:** Defines a constructor that takes an integer `n` as input.
  - Initializes the `size` member with the given `n`.
  - Dynamically allocates memory for an array `A` of size `n` using `new int[n]`.

### Member Function Set:
```cpp
        void Set(int i, int j, int value)
        {
            if(i == j) 
            {
                A[i] = value;
                cout << "Value set at (" << i << ", " << j << ")." << endl;
            }
        }
```
- **Set Function:** Sets the value at a specific position `(i, j)` in the diagonal matrix.
  - Checks if `i` is equal to `j` (indicating a diagonal element).
  - If true, sets the value `value` at index `i` in the array `A`.
  - Prints a message indicating the value has been set at the specified position.

### Member Function Get:
```cpp
        int Get(int i, int j)
        {
            if(i == j) return A[i];
            else return 0;    
        }
```
- **Get Function:** Retrieves the value at a specific position `(i, j)` in the diagonal matrix.
  - Checks if `i` is equal to `j` (indicating a diagonal element).
  - If true, returns the value at index `i` in the array `A`.
  - Otherwise, returns 0 (since non-diagonal elements are always 0 in a diagonal matrix).

### Member Function Display:
```cpp
        void display()
        {
            for(int i = 0; i < size; i++)
            {
                for(int j = 0; j < size; j++)
                {
                    if(i == j) cout << A[i] << " ";
                    else cout << "0 ";
                }
                cout << endl;
            }
        }
```
- **Display Function:** Prints the diagonal matrix.
  - Uses nested loops to traverse the matrix.
  - Prints the value `A[i]` at position `(i, i)` (diagonal element) and 0 for non-diagonal elements.

### Destructor:
```cpp
        ~DiagonalMatrix(){delete []A;}
```
- **Destructor Function:** Releases memory allocated for the array `A` when the object goes out of scope.
  - Deletes the dynamically allocated array using `delete []A`.

### Topics Covered:
- **Class Definition:** Defining a class and its data members.
- **Constructor:** Initializing data members and dynamically allocating memory.
- **Member Functions:** Set, Get, Display for managing diagonal matrix operations.
- **Destructor:** Releasing dynamically allocated memory when the object is destroyed.