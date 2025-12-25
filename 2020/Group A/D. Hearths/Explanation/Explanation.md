# Explanation: Hearths

## Problem Analysis
Count connected components of 1s in a grid, including diagonal neighbors. For each component, identify its "top-left" segment's coordinates.

## Algorithmic Approach
1.  **Traversal**: Iterate through the grid. When a `1` is found that hasn't been visited:
    *   This is a new hearth.
    *   Start a **BFS** or **DFS** to find all connected `1`s.
    *   Neighbors include the 8 surrounding cells (horizontally, vertically, and diagonally).
2.  **Component Tracking**:
    *   While traversing a component, keep track of the coordinates of all its cells.
    *   Find the **top-left segment**: This is the cell $(r, c)$ with the minimum $r$, and among those with the minimum $r$, the one with the minimum $c$.
3.  **Output**:
    *   Print the total number of hearths.
    *   For each hearth, print its top-left coordinates.

## Complexity
*   **Time Complexity**: O(R \cdot C). Each cell is visited once.
*   **Space Complexity**: O(R \cdot C) for the visited matrix.

## Key Insights
*   8-connectivity (including diagonals) is key to identifying the hearths correctly.
*   The "top-left segment" definition is standard: minimize row, then minimize column.
