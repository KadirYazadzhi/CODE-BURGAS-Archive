# Explanation: Number Systems

## Problem Analysis
Given an equation $X + Y = Z$ with numbers written in an unknown base $M$, find the smallest $M \in [2, 36]$ for which the equation is mathematically correct.

## Algorithmic Approach
1.  **Determine Minimum Possible Base**:
    *   For each number $X, Y, Z$, find the largest digit.
    *   The base $M$ must be strictly greater than any digit present in the equation.
    *   If a number contains 'A', the minimum base is 11; if 'Z', it's 36.
2.  **Brute Force Bases**:
    *   Iterate $M$ from `min_base` up to 36.
    *   Convert $X, Y, Z$ to decimal using the current base $M$:
        *   `val = val * M + digit_value`.
    *   Check if `decimalX + decimalY == decimalZ`.
    *   If true, the current $M$ is the answer.
3.  **Result**: If no base works up to 36, the problem constraints usually imply one will, otherwise handle accordingly.

## Complexity
*   **Time Complexity**: O(36 \cdot L) where L is the length of the strings.
*   **Space Complexity**: O(L).

## Key Insights
*   Base 36 uses digits 0-9 and letters A-Z (where A=10, ..., Z=35).
*   Always use `long long` for decimal conversions as $36^{10}$ exceeds the range of a 32-bit integer.
