# 166 - Sparse matrix addition

```cpp
SparseMatrix add(SparseMatrix s2)
{
    int i, j, k;
    if(m != s2.m || n != s2.n) return SparseMatrix(0, 0, 0);
```
- This is the beginning of the `add` member function. It takes another `SparseMatrix` object (`s2`) as a parameter. It first checks if the dimensions of the two matrices (`m` and `n`) are the same. If not, it returns a new `SparseMatrix` object with zero dimensions (empty matrix) as the sum is not possible.

```cpp
    SparseMatrix *sum = new SparseMatrix(m, n, nonZeroCount + s2.nonZeroCount);
    i = j = k = 0;
```
- It dynamically allocates a new `SparseMatrix` object (`sum`) to store the result of the addition. The dimensions of the new matrix are the same as the input matrices, and it allocates space for the maximum possible number of non-zero elements in the sum.

```cpp
    while(i < nonZeroCount && j < s2.nonZeroCount)
    {
        if(element[i].i < s2.element[j].i)
            sum -> element[k++] = element[i++];
        else if(element[i].i > s2.element[j].i)
            sum -> element[k++] = s2.element[j++];
        else
        {
            if(element[i].j < s2.element[j].j)
                sum -> element[k++] = element[i++];
            else if(element[i].j > s2.element[j].j)
                sum -> element[k++] = s2.element[j++];
            else
            {
                sum -> element[k] = element[i];
                sum -> element[k++].x = element[i++].x + s2.element[j++].x;
            } 
        }
    }
```
- This part of the code merges the non-zero elements of the two matrices. It uses three indices (`i`, `j`, and `k`) to traverse through the non-zero elements of the current object (`element`), the second matrix (`s2.element`), and the sum matrix (`sum.element`), respectively.
- The conditions inside the loop compare the row and column indices of the non-zero elements and perform the addition accordingly. If the indices are the same, it adds the values and stores the result in the `sum` matrix.

```cpp
    for(; i < nonZeroCount; i++) sum -> element[k++] = element[i];
    for(; j < s2.nonZeroCount; j++) sum -> element[k++] = s2.element[j];
```
- These loops handle any remaining non-zero elements in the current matrix and the second matrix, if any. If there are still non-zero elements left in either matrix, they are copied to the sum matrix.

```cpp
    sum -> nonZeroCount = k;
    return *sum;
}
```
- The function sets the `nonZeroCount` of the `sum` matrix to the actual number of non-zero elements it contains after the addition.
- Finally, it returns the `sum` matrix by dereferencing the pointer to the dynamically allocated matrix. Note that returning a pointer to a dynamically allocated object without proper handling could lead to memory leaks, but in this case, the destructor of `SparseMatrix` should handle the cleanup.