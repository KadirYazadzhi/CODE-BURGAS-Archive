# Explanation: Binary Numbers

## Problem Analysis
Given a decimal number $D$, count the number of ones in its binary representation. Then, identify which student(s) among $M$ participants made the closest guess to this count.

## Algorithmic Approach
1.  **Count Ones**:
    *   Use a built-in function like `__builtin_popcountll(D)` in C++ or a loop:
    *   `while (D > 0) { count += (D & 1); D >>= 1; }`.
2.  **Compare Guesses**:
    *   For each student's guess $G_i$, calculate the absolute difference `diff = abs(G_i - count)`.
    *   Find the minimum `diff` among all students.
3.  **Output**:
    *   Identify all students whose `abs(G_i - count) == min_diff`.
    *   Print their indices (1-indexed) in the order they were entered.

## Complexity
*   **Time Complexity**: O(M + log D), where M is the number of students and D is the number.
*   **Space Complexity**: O(M) to store the guesses.

## Key Insights
*   Trailing ones in binary are found using the modulo/bitshift approach.
*   Multiple students can win if they have the same minimum error.
