# Explanation: Chess Rook

## Problem Analysis
Given an initial position $(col, row)$ and a series of $N$ moves (direction and distance), find the final position of a rook on an 8x8 chessboard.

## Algorithmic Approach
1.  **Parse Initial Position**:
    *   Column `a-h` corresponds to values `0-7`.
    *   Row `1-8` corresponds to values `0-7`.
2.  **Process Moves**:
    *   For each move `(dir, offset)`:
        *   `U` (Up): `row += offset`.
        *   `D` (Down): `row -= offset`.
        *   `L` (Left): `col -= offset`.
        *   `R` (Right): `col += offset`.
    *   *Note*: The problem implies moves stay within board bounds.
3.  **Convert Back**:
    *   Convert `col` (0-7) back to `'a' + col`.
    *   Convert `row` (0-7) back to `row + 1`.
4.  **Output**: Print the final coordinates (e.g., `a2`).

## Complexity
*   **Time Complexity**: O(N), where N is the number of moves.
*   **Space Complexity**: O(1).

## Key Insights
*   The coordinate system is 0-indexed internally for easy arithmetic.
*   A rook moves along rows (changing column) or along columns (changing row).
