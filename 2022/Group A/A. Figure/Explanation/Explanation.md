# Explanation: Figure

## Problem Analysis
We need to count "diamond" shapes in an $N \times M$ grid. A diamond consists of '#' on its boundary and only '.' inside. It must not be empty.

## Algorithmic Approach
A diamond is defined by its center and its radius $R$, or by its top vertex and size.
For a diamond of "size" $k$:
- Top: $(r, c)$
- Bottom: $(r+2k, c)$
- Left: $(r+k, c-k)$
- Right: $(r+k, c+k)$

1.  **Preprocessing**: To quickly check if a diagonal segment consists of '#', use 2D prefix sums or precompute the length of consecutive '#' in the four diagonal directions for every cell.
2.  **Iterate**:
    *   For each cell $(r, c)$ containing '#', assume it is the **top vertex** of a potential diamond.
    *   Try different sizes $k \ge 1$.
    *   Check if the four diagonal edges $(r, c) \to (r+k, c+k) \to (r+2k, c) \to (r+k, c-k) \to (r, c)$ consist entirely of '#'.
    *   **Interior Check**: Check if all cells inside the diamond are '.'. This can be done using 2D prefix sums of '#' counts. If the count of '#' in the diamond's bounding box minus the count on the edges is 0, the interior is clear.
3.  **Optimization**: Stop expanding $k$ if an edge cannot be formed.

## Complexity
*   **Time Complexity**: O(N \cdot M \cdot \min(N, M)) naive, but with diagonal prefix sums, checking edges is O(1). Checking the interior with 2D prefix sums is also O(1). Total O(N \cdot M).
*   **Space Complexity**: O(N \cdot M) for precomputed data.

## Key Insights
- Diagonal lines in a grid are cells where $r+c$ is constant or $r-c$ is constant.
- Using prefix sums allows for $O(1)$ verification of rectangular or diamond areas.
