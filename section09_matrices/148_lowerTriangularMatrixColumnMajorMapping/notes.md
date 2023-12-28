# 148_lowerTriangularMatrixColumnMajorMapping

The formula you've provided is used for mapping 2D coordinates `(i, j)` of a lower triangular matrix to a 1D array index `Index(A[i][j])` using column-major mapping.

### Formula for Mapping 2D Coordinates to 1D Index (Column-Major Mapping):

Given `i` as the row index, `j` as the column index, and `n` as the size of the matrix:

- **Formula:** 

  \[ \text{Index}(A[i][j]) = [(n \cdot (j - 1)) - \frac{(j - 2) \cdot (j - 1)}{2}] + (i - j) \]

Where:
- `i` represents the row index.
- `j` represents the column index.
- `n` is the size of the matrix.
- `Index(A[i][j])` is the 1D array index corresponding to the element at `(i, j)` in the lower triangular matrix.

### Explanation of the Formula:

- **`n * (j - 1)`**: Determines the starting index for column `j` (assuming 1-based indexing) considering the size of the matrix `n`.
- **`((j - 2) * (j - 1)) / 2`**: Adjusts the index to account for the triangular shape and the non-existent elements above the diagonal.
- **`(i - j)`**: Accounts for the offset within the column to find the particular element at position `(i, j)`.

This formula efficiently maps the 2D coordinates `(i, j)` of a lower triangular matrix to the corresponding 1D array index using column-major mapping, allowing for effective access and manipulation of elements in a storage-efficient manner.