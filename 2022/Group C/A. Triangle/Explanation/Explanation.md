# Explanation: Triangle

## Problem Analysis
Output a right-angled triangle with $N$ rows using asterisks for the border and dots for the interior. Each row has a specific number of characters with spaces in between.

## Algorithmic Approach
1.  **Row 1**: Always `*`.
2.  **Row $2$ to $N-1$**:
    *   First character is `*`.
    *   Last character is `*`.
    *   All characters in between are `.`.
3.  **Row $N$**: All characters are `*`.
4.  **Spacing**: Each character in a row is separated by a single space.

## Complexity
*   **Time Complexity**: O(N^2) to print all characters.
*   **Space Complexity**: O(1).

## Key Insights
*   The $i$-th row has $i$ characters.
*   The triangle is hollow except for the first column, the hypotenuse, and the base.
