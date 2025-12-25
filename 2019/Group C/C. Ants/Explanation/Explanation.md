# Explanation: Ants

## Problem Analysis
Check if a given string (representing a row of grains) is symmetric. A symmetric string reads the same forwards and backwards (a palindrome).

## Algorithmic Approach
1.  **Standard Palindrome Check**:
    *   For a string $S$ of length $L$:
    *   Iterate from $i = 0$ to $L/2 - 1$.
    *   Compare $S[i]$ with $S[L - 1 - i]$.
2.  **Validation**:
    *   If all compared pairs are identical, the string is symmetric (output 1).
    *   If any pair differs, the string is not symmetric (output 0).

## Complexity
*   **Time Complexity**: O(L) per row, where L is the length of the string.
*   **Space Complexity**: O(L).

## Key Insights
*   Symmetry implies $S[i] = S[L-1-i]$ for all valid $i$.
*   The input consists of $N$ such checks.
