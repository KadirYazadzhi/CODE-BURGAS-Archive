# Explanation: The Dancing Square

## Problem Analysis
A square is defined by its center $(x, y)$ and side length $a$. It moves by $dx$ and $dy$. We need to output the new center and the (unchanged) side length.

## Algorithmic Approach
1.  **Read Input**: Initial $x, y, a$. Then movements $dx, dy$.
2.  **Calculate**:
    *   `new_x = x + dx`
    *   `new_y = y + dy`
3.  **Output**: `new_x`, `new_y`, and the original `a`.

## Complexity
*   **Time Complexity**: O(1).
*   **Space Complexity**: O(1).

## Key Insights
*   Movement of a rigid body like a square changes the coordinates of all its points by the same offset $(dx, dy)$, including its center.
*   Translation does not change the dimensions (side length) of the object.
