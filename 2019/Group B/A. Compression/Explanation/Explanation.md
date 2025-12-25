# Explanation: Compression

## Problem Analysis
Repeatedly sum the digits of a number until a single digit remains. This result is known as the **Digital Root**.

## Algorithmic Approach
1.  **Iterative Method**:
    *   While the number $a$ has more than one digit ($a \ge 10$):
        *   Calculate the sum of its digits.
        *   Replace $a$ with this sum.
2.  **Mathematical Method**:
    *   For any positive integer $n$, the digital root can be calculated as `1 + (n - 1) % 9`.
3.  **Output**: Print the final single-digit number.

## Complexity
*   **Time Complexity**: O(log_{10} a), which is the number of digits.
*   **Space Complexity**: O(1).

## Key Insights
*   Summing digits is equivalent to taking the number modulo 9 (with 0 mapped to 9).
*   Even for very large numbers (e.g., $10^{18}$), the sum of digits becomes small very quickly (max $9 \times 18 = 162$).
