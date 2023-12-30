# 154_triDiagonalAndTriBandMatrix/triDiagonal

### 1. Tridiagonal Matrix:
- **Definition:** A tridiagonal matrix is a special form of a banded matrix where all non-zero elements are confined to the main diagonal and the diagonals directly above and below the main diagonal.
- In a tridiagonal matrix, elements are non-zero only when `i = j`, `i = j + 1`, or `i = j - 1`.

### 2. Formulas to Represent Tridiagonal Matrices in a 1D Array:
For a tridiagonal matrix of size `n x n`:

#### Case 1: \(i - j = 1\)
- **Index in 1D Array:** \(i - 1\)

#### Case 2: \(i - j = 0\)
- **Index in 1D Array:** \(n - 1 + i - 1 = n + i - 2\)

#### Case 3: \(i - j = -1\)
- **Index in 1D Array:** \(2n - 1 + i - 1 = 2n + i - 2\)

### Explanation:
- **Case 1 (Upper Diagonal):** The elements in the upper diagonal are stored starting from index 0 in the 1D array. For each row, the index is determined by `i - 1`.
- **Case 2 (Main Diagonal):** The elements in the main diagonal are stored after the upper diagonal elements. The formula `n + i - 2` is used to find the index in the 1D array.
- **Case 3 (Lower Diagonal):** The elements in the lower diagonal are stored after the main diagonal elements. The formula `2n + i - 2` is used to find the index in the 1D array.

### Importance:
- Tridiagonal matrices arise in various scientific and engineering applications, especially in problems involving systems of linear equations or differential equations.
- Representing them in a 1D array using these formulas helps save memory by exploiting the specific structure of the matrix while allowing efficient access and manipulation of elements.