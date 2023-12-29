# 151_upperTriangularMatrixRowMajorMapping

### 1. Representation of Elements:
- **Non-zero Elements:** In an upper triangular matrix, non-zero elements are located on and above the main diagonal. Specifically, for element `A[i][j]`, non-zero values exist where `i ≤ j`.
- **Zero Elements:** Zero elements are located below the main diagonal, where `i > j`.

### 2. Formula for Row-Major Mapping (Upper Triangular Matrix):
Given `i` as the row index and `j` as the column index in an upper triangular matrix of size `n`:

- **Formula for Row-Major Mapping:** 

  \[ \text{Index}(A[i][j]) = ((i - 1) \cdot n - (i - 2) \cdot (i - 1) / 2) + (j - 1) \]

Where:
- `i` represents the row index.
- `j` represents the column index.
- `n` is the size of the matrix.
- `Index(A[i][j])` is the 1D array index corresponding to the element at `(i, j)` in the upper triangular matrix.

### Explanation of the Formula:

- **`((i - 1) \cdot n)`**: Represents the starting index for row `i` (assuming 1-based indexing) considering the size of the matrix `n`.
- **`((i - 2) \cdot (i - 1) / 2)`**: Adjusts the index to account for the triangular shape and the non-existent elements below the diagonal.
- **`(j - 1)`**: Represents the offset within the row to find the particular element at position `(i, j)`.

This formula efficiently maps the 2D coordinates `(i, j)` of an upper triangular matrix to the corresponding 1D array index using row-major mapping, allowing effective access to elements while optimizing storage for non-zero values.