# 153_symmetricMatrix

### 1. Symmetric Matrix:
- **Definition:** A symmetric matrix is a square matrix where the elements across the main diagonal are mirrored along that diagonal. Mathematically, for a matrix `A`, it satisfies the condition `A[i][j] = A[j][i]` for all `i` and `j`.

#### Example:
Consider a symmetric matrix:

\[
A = \begin{bmatrix}
2 & 5 & 7 \\
5 & 3 & 8 \\
7 & 8 & 6 \\
\end{bmatrix}
\]

In this matrix, `A[1][2]` is equal to `A[2][1]` (`5`), `A[1][3]` is equal to `A[3][1]` (`7`), and `A[2][3]` is equal to `A[3][2]` (`8`), satisfying the condition for symmetry.

### 2. Storing 2D Symmetric Matrix in 1D and Why:

- **Storage Efficiency:** Storing a symmetric matrix in a 1D array exploits the symmetric property by saving space. Since elements below the main diagonal are mirrored above it, it's redundant to store them separately.

#### Method of Storing:
- Only the elements above or below the main diagonal are stored.
- For an `n x n` symmetric matrix, around `n * (n + 1) / 2` elements are stored instead of `n * n` elements in a 2D array.

#### Representation in 1D:
- In row-major or column-major fashion, the lower or upper triangular elements (including the main diagonal) are stored in a 1D array.
- Elements can be mapped from their 2D coordinates `(i, j)` to a 1D array index using mapping formulas tailored for the triangular shape of the matrix.

#### Importance:
- Reducing storage requirements is crucial in scenarios where memory optimization is necessary, especially for large matrices.
- Operations on symmetric matrices can be faster by exploiting the reduced space for storage, leading to more efficient computations.

Storing a symmetric matrix in 1D not only conserves memory but also simplifies certain computations by utilizing the inherent symmetry of the matrix.