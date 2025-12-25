# Explanation: Boring Party

## Problem Analysis
Check if a rectangle can be formed by using a collection of straws of lengths 1, 2, 3, and 4. Straws can be bent (folded) at any point but not cut.

## Algorithmic Approach
1.  **Calculate Total Length**:
    *   `Perimeter = (1 * P) + (2 * Q) + (3 * R) + (4 * S)`.
2.  **Condition for Rectangle**:
    *   For a rectangle to be formed, we must be able to divide the total length into two equal segments (each being the sum of two adjacent sides $W + H$).
    *   Since all straws have integer lengths and can be bent at any point, the only requirement is that the total length is **even**, allowing the semi-perimeter $W+H$ to be an integer.
3.  **Validation**:
    *   If `Perimeter % 2 == 0`, output `YES`.
    *   Otherwise, output `NO`.

## Complexity
*   **Time Complexity**: O(1) per test case.
*   **Space Complexity**: O(1).

## Key Insights
*   The "can be bent anywhere" property means we can always create corners at the exact points needed to satisfy the $W+H = P/2$ constraint, provided $P/2$ is an integer.
*   The example explanation confirms this logic: a perimeter of 53 is `NO`, while 44 is `YES`.
