# Explanation: Puzzle

## Problem Analysis
Find keywords in an $N \times N$ grid. Letters in the grid are adjacent vertically or horizontally. When a keyword is found, its letters are "crossed out" (cannot be reused). After all keywords are processed, output the remaining letters in alphabetical order.

## Algorithmic Approach
Since the grid is small ($10 \times 10$) and the number of keywords is small ($M \le 10$), we can use **Backtracking** to find each word.

1.  **Preprocessing**: Store the grid in a 2D array and a `used[N][N]` boolean matrix.
2.  **Search for a Keyword**:
    *   Find the first letter of the keyword in the grid that is not `used`.
    *   From there, perform a **Depth-First Search (DFS)** to find the subsequent letters of the keyword.
    *   Each step of DFS must move to an adjacent (up, down, left, right) cell that is not `used` and contains the correct next letter.
3.  **Marking**: Once a complete path for the keyword is found, mark all cells in that path as `used`.
4.  **Final Step**:
    *   Iterate through the entire grid.
    *   Collect all letters where `used[i][j]` is false.
    *   Sort these letters alphabetically and print them.

## Complexity
*   **Time Complexity**: O(M \cdot N^2 \cdot 4^L) in the absolute worst case, but with the small constraints and fixed letters, it runs very quickly.
*   **Space Complexity**: O(N^2) for the grid and visited matrix.

## Key Insights
*   Crucially, letters must be crossed out as each keyword is processed.
*   The problem guarantees that each keyword can be found and crossed out.
