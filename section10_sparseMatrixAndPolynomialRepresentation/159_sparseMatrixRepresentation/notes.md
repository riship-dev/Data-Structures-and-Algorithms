# 159_sparseMatrixRepresentation

### 1. Sparse Matrix:
- **Definition:** A sparse matrix is a matrix that predominantly consists of zero elements. It contains a large number of zero values compared to non-zero values.
- Sparse matrices arise commonly in various domains where data tends to be mostly zero, such as in scientific computing, network analysis, and graph representation.

### 2. 3-Column Representation:
- **Description:** The 3-Column representation (also known as the Coordinate List or Triplet Format) of a sparse matrix stores non-zero elements and their corresponding row and column indices.
- **Structure:** It uses three arrays: one for non-zero values, one for row indices, and one for column indices. The first row contains metadata such as the matrix dimensions and the number of non-zero elements.

### Example:
Suppose we have a matrix:
```
1 0 0
0 2 0
3 0 4
```
The 3-Column representation could be:
```
[1, 2, 3, 4]  // Non-zero elements
[1, 2, 3, 3]  // Row indices
[1, 2, 1, 3]  // Column indices
```

### 3. Compressed Sparse Rows (CSR) Representation:
- **Description:** CSR is a popular way to represent sparse matrices. It stores row-based information, indicating the location of non-zero elements and their values.
- **Structure:** It consists of three arrays: `values`, `rowPtr`, and `colIndices`. 
  - `values` stores non-zero elements.
  - `rowPtr` contains pointers indicating the start index of each row in the `values` array.
  - `colIndices` holds the column indices corresponding to the non-zero elements.

### Example:
For the matrix:
```
1 0 0 0
0 2 0 0
0 3 4 0
0 0 0 5
```
The CSR representation could be:
```
values: [1, 2, 3, 4, 5]  // Non-zero elements
rowPtr: [0, 1, 3, 5, 5]  // Pointers to start of rows in values array
colIndices: [0, 1, 1, 2, 2]  // Column indices
```

### Importance:
- Sparse matrix representations help save memory by only storing non-zero elements, reducing storage requirements and improving computational efficiency for operations on matrices with mostly zero values.