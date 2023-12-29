# 152_upperTriangularMatrixColumnMajorMapping

### 1. Formula for Column-Major Mapping (Upper Triangular Matrix):

Given `i` as the row index and `j` as the column index in an upper triangular matrix:

- **Formula for Column-Major Mapping:** 

  \[ \text{Index}(A[i][j]) = (j \cdot (j - 1) / 2) + i - 1 \]

Where:
- `i` represents the row index.
- `j` represents the column index.
- `Index(A[i][j])` is the 1D array index corresponding to the element at `(i, j)` in the upper triangular matrix.

### Explanation of the Formula:

- **\[(j \cdot (j - 1) / 2)\]** Represents the starting index for column `j` (assuming 1-based indexing) considering the triangular shape of the upper matrix.
- **`i - 1`**: Represents the offset within the column to find the particular element at position `(i, j)`.

This formula allows for the efficient mapping of 2D coordinates `(i, j)` of an upper triangular matrix to the corresponding 1D array index using column-major mapping, enabling easy access to elements while optimizing storage for non-zero values.