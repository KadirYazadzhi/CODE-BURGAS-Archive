# Explanation: Labyrinth

## Problem Analysis
Find a path from $(0, 0)$ to $(n-1, m-1)$ in a grid of 0s (walls) and 1s (paths). Output the moves as a string of 'D', 'R', 'L', 'U'.

## Algorithmic Approach
**Breadth-First Search (BFS)** is the best way to find the shortest path in an unweighted grid.

1.  **Graph Representation**: The grid itself is the graph. Neighbors are adjacent cells (up, down, left, right).
2.  **BFS Initialization**:
    *   Queue `q` storing current position `(r, c)`.
    *   `visited` matrix to avoid cycles.
    *   `parent` matrix to store the move taken to reach each cell (e.g., `parent[r][c] = 'D'`).
3.  **Traversal**:
    *   Start at `(0, 0)`.
    *   For each cell, try moving in 4 directions.
    *   If a move is valid (inside bounds, is a `1`, not visited):
        *   Mark visited.
        *   Store the direction.
        *   Push to queue.
4.  **Path Reconstruction**:
    *   If $(n-1, m-1)$ is reached, backtrack from the exit to the entrance using the `parent` information.
    *   Reverse the collected directions to get the path from start to finish.
5.  **Output**: The path string or "NO SOLUTION".

## Complexity
*   **Time Complexity**: O(N \cdot M).
*   **Space Complexity**: O(N \cdot M).

## Key Insights
*   BFS guarantees the shortest path (minimum number of steps).
*   The order of directions checked in BFS (e.g., D then R) can affect which "shortest" path is found if multiple exist, but any valid shortest path is usually accepted.
