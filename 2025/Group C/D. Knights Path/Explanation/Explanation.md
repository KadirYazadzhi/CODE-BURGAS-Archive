# Explanation: Knights Path

## Problem Analysis
This is the **Knight's Tour** problem. We need to find a path for a chess knight to visit every square on an $N \times N$ board exactly once, starting from $(X, Y)$.

## Algorithmic Approach
This requires **Backtracking**.

1.  **Board Setup**: Create a visited matrix `vis[N][N]` (or store move numbers `1...N*N`). Initialize with 0.
2.  **Start**: Mark `(X, Y)` as visited (move #1).
3.  **Backtracking Function** `solve(x, y, move_count)`:
    *   **Base Case**: If `move_count == N * N`, we have filled the board. Print the solution (sequence of moves) and return `true`.
    *   **Recursion**:
        *   Iterate through all 8 possible knight moves.
        *   Calculate next position `(nx, ny)`.
        *   Check if `(nx, ny)` is valid (inside board) and not visited.
        *   Mark `(nx, ny)` as visited.
        *   Recursive call: `if (solve(nx, ny, move_count + 1))` return `true`.
        *   **Backtrack**: If the recursive call returns `false`, unmark `(nx, ny)` (set to 0) to try other paths.
4.  **Heuristic (Warnsdorff's Rule)**:
    *   For larger $N$, simple backtracking is too slow ($O(8^{N^2})$).
    *   **Optimization**: Always move to the square that has the *fewest* available onward moves. This drastically reduces the search space.
    *   For $N=5$, simple backtracking might pass, but heuristics are safer.

## Complexity
*   **Time Complexity**: Exponential $O(8^{N^2})$ without heuristics. With Warnsdorff's rule, it's approximately linear $O(N^2)$ for small/medium boards.
*   **Space Complexity**: O(N^2) for recursion stack and board.

## Key Insights
*   Standard backtracking is sufficient for small N (e.g., N=5).
*   Output needs to be the list of coordinates in order of traversal.
