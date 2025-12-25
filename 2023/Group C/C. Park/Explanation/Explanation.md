# Explanation: Park

## Problem Analysis
Find the maximum area of a rectangle containing only zeros in an $N \times N$ grid. Shaded cells (ones) represent monuments that cannot be included.

## Algorithmic Approach
This is the **Largest Rectangle in a Binary Matrix** problem.

1.  **Precompute Heights**:
    *   For each row $i$ and column $j$, calculate the height of consecutive zeros upwards:
    *   `h[i][j] = (grid[i][j] == 0) ? h[i-1][j] + 1 : 0`.
2.  **Solve per Row**:
    *   For each row, you now have an array of "heights" (like a histogram).
    *   Find the largest rectangle in this histogram.
    *   A simple way to do this is for each column $j$, find how far it can extend left and right where other columns have height $\ge h[i][j]$.
    *   Area = $h[i][j] \times (right\_bound - left\_bound + 1)$.
3.  **Track Maximum**: Keep track of the largest area found across all rows.

## Complexity
*   **Time Complexity**: O(N^2). We process each cell of the matrix a constant number of times.
*   **Space Complexity**: O(N) if we only store the current row's heights.

## Key Insights
*   The $N=200$ constraint is small, so an $O(N^3)$ approach might also pass, but $O(N^2)$ is the standard optimal solution.
