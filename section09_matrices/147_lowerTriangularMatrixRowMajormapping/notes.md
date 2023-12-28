# 147_lowerTriangularMatrixRowMajorMapping

### 1. Lower Triangular Matrix:
A lower triangular matrix is a square matrix in which all the elements above the main diagonal are zero. The main diagonal and elements below it contain non-zero values.

### 2. Defining Zero and Non-zero Elements Mathematically:
- **Zero Elements:** In a lower triangular matrix, zero elements are located above the main diagonal, where `i > j` (row index is greater than column index).
- **Non-zero Elements:** Non-zero elements are located on and below the main diagonal, where `i <= j` (row index is less than or equal to column index).

### 3. Storing in a 1D Array using Row-Major Mapping:
- To save space and represent a lower triangular matrix in a 1D array, we flatten the matrix using row-major mapping.
- The formula for the number of elements in a lower triangular matrix of size `n` is `n * (n + 1) / 2`. It represents the sum of the first `n` natural numbers.
- We allocate an array of size `n * (n + 1) / 2` to store only the elements present in the lower triangular matrix.

### 4. Accessing Elements Using Row-Major Formula:
The formula used to map the 2D coordinates `(i, j)` of a lower triangular matrix into a 1D array index `Index(A[i][j])` using row-major mapping:

#### Formula for Mapping 2D Coordinates to 1D Index (Row-Major Mapping):

Given `i` as the row index and `j` as the column index in a lower triangular matrix:

- **Formula:** 

  \[ \text{Index}(A[i][j]) = \frac{i \cdot (i - 1)}{2} + (j - 1) \]

Where:
- `i` represents the row index.
- `j` represents the column index.
- `Index(A[i][j])` is the 1D array index corresponding to the element at `(i, j)` in the lower triangular matrix.

This formula allows you to convert the 2D coordinates `(i, j)` of a lower triangular matrix to the corresponding 1D array index using row-major mapping, providing an efficient way to access elements in a storage-efficient manner.

By using row-major mapping, we optimize memory usage by storing only the necessary elements in a 1D array while still allowing easy access to specific elements within the lower triangular matrix.