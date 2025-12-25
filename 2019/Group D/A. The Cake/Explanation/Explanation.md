# Explanation: The Cake

## Problem Analysis
Raya needs to place a rectangular cake of size $A \times B$ on a table of size $N \times M$ that already contains $P$ smaller rectangular plates. The plates are placed along the edges of the table.

## Algorithmic Approach
1.  **Interpret the Layout**: The "tightly along its edges" description implies that each plate is pushed against one of the four boundaries (top, bottom, left, or right).
2.  **Determine Occupied Space**:
    *   Since we want to check if the cake fits, we need to know the dimensions of the largest empty rectangle remaining.
    *   If plates are along the left/right edges, they reduce the available width. If along top/bottom, they reduce height.
    *   A simple model for this problem is to assume the plates on opposite sides "squeeze" the available space:
        *   `max_left_width`, `max_right_width`, `max_top_height`, `max_bottom_height`.
        *   However, without knowing which plate is where, a common simplification in such contest problems is that the plates are arranged to be as unobtrusive as possible.
3.  **Check Fit**:
    *   Available Width $W' = N - (\text{thickness from left} + \text{thickness from right})$.
    *   Available Height $H' = M - (\text{thickness from top} + \text{thickness from bottom})$.
    *   The cake fits if $(A \le W' \text{ and } B \le H')$ OR $(B \le W' \text{ and } A \le H')$ (allowing rotation).
4.  **Result**: Output `YES` or `NO`.

## Complexity
*   **Time Complexity**: O(P).
*   **Space Complexity**: O(P).

## Key Insights
*   The "parallel to edges" constraint simplifies the geometry to 1D subtractions on the X and Y axes.
