# Explanation: Chess Rook

## Problem Analysis
Calculate the total number of squares traveled by a rook along a given sequence of positions on a standard 8x8 chessboard.

## Algorithmic Approach
1.  **Coordinate Mapping**:
    *   Map column letters `a-h` to integers `0-7`.
    *   Map row digits `1-8` to integers `0-7`.
2.  **Distance Calculation**:
    *   For each move from $(x_1, y_1)$ to $(x_2, y_2)$, the rook travels a distance equal to the number of squares moved.
    *   Since the rook moves only horizontally OR vertically:
        *   If $x_1 = x_2$, distance is $|y_2 - y_1|$.
        *   If $y_1 = y_2$, distance is $|x_2 - x_1|$.
    *   Sum these distances for all moves in the path.
3.  **Output**: Print the total distance for each path.

## Complexity
*   **Time Complexity**: O(N \cdot P), where N is the number of paths and P is the average path length.
*   **Space Complexity**: O(P) to store the path.

## Key Insights
*   The distance is a simple Manhattan distance where one component is always zero per move.
*   Example: `b3 c3` is a distance of 1. `a1 a8 h8 h1 a1` is $(8-1) + (8-1) + (8-1) + (8-1) = 7 \times 4 = 28$.
    *   Wait, the example says 28. `a1` to `a8` is 7 squares. `a8` to `h8` is 7. `h8` to `h1` is 7. `h1` to `a1` is 7. Total 28. Correct.
