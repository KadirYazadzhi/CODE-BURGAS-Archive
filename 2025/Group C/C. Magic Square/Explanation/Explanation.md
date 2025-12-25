# Explanation: Magic Square

## Problem Analysis
A Magic Square of size $N \times N$ is a matrix where the sum of every row, every column, and both main diagonals is equal to the same constant.

## Algorithmic Approach
1.  **Calculate Target Sum**:
    *   Sum the first row. This becomes our `target`.
2.  **Check Rows**:
    *   Iterate through all remaining rows. Calculate their sum.
    *   If any row sum $\neq$ `target`, return "NO".
3.  **Check Columns**:
    *   Iterate through all columns $j=0 \dots N-1$.
    *   Calculate sum of column $j$.
    *   If any column sum $\neq$ `target`, return "NO".
4.  **Check Diagonals**:
    *   **Main Diagonal**: Sum elements where $i == j$.
    *   **Anti-Diagonal**: Sum elements where $i + j == N - 1$.
    *   If either diagonal sum $\neq$ `target`, return "NO".
5.  **Result**: If all checks pass, return "YES".

## Complexity
*   **Time Complexity**: O(N^2). We traverse the matrix a few times (or once if optimized).
*   **Space Complexity**: O(N^2) to store the matrix.

## Key Insights
*   We can compute row/col/diagonal sums in a single pass over the matrix if we maintain separate accumulator arrays, but sequential checking is clearer.
