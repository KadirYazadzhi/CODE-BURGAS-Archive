# Explanation: Sudoku

## Problem Analysis
Solve a 9x9 Sudoku puzzle where digits 1-9 are represented by letters A-I.

## Algorithmic Approach
This is a search problem typically solved with **Backtracking**.

1.  **State Management**:
    *   Maintain three sets of bitmasks (or boolean arrays): `row[9]`, `col[9]`, and `box[9]`.
    *   `row[i] & (1 << k)` indicates if digit $k$ is already used in row $i$.
2.  **Recursive Function** `solve(cell_index)`:
    *   Find the next empty cell (marked with `.`).
    *   If no empty cells remain, the puzzle is solved.
    *   For the current cell $(r, c)$, try each digit $k \in \{1 \dots 9\}$.
    *   Check if $k$ is valid: not in `row[r]`, `col[c]`, or `box[box_index]`.
    *   If valid:
        *   Place $k$, update bitmasks.
        *   Recursively call `solve(cell_index + 1)`.
        *   If it returns true, we are done.
        *   Otherwise, **backtrack**: remove $k$ and clear bitmasks.
3.  **Letter Conversion**: Map `A...I` to `1...9` for internal logic and back for output.

## Complexity
*   **Time Complexity**: Exponential $O(9^{N_{empty}})$ in worst case, but heavily pruned by Sudoku rules.
*   **Space Complexity**: O(1) for the board and bitmasks.

## Key Insights
*   Bitmasking makes the "is digit used" check extremely fast.
*   The 3x3 box index is calculated as `(row / 3) * 3 + (col / 3)`.
