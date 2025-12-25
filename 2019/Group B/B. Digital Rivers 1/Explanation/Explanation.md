# Explanation: Digital Rivers 1

## Problem Analysis
Given two starting numbers $R1$ and $R2$, each generating a sequence where the next number is $n + \text{sumDigits}(n)$, find the first number that appears in both sequences.

## Algorithmic Approach
1.  **Simultaneous Simulation**:
    *   Maintain two variables `current1` and `current2` representing the current value in each river.
    *   While `current1 != current2`:
        *   If `current1 < current2`, advance `current1` to its next value: `current1 += sumDigits(current1)`.
        *   If `current2 < current1`, advance `current2` to its next value: `current2 += sumDigits(current2)`.
2.  **Result**: Once `current1 == current2`, this is the meeting point.

## Complexity
*   **Time Complexity**: O(Distance to meeting point). For $R1, R2 \le 2 \cdot 10^7$, the rivers meet quickly enough.
*   **Space Complexity**: O(1).

## Key Insights
*   Always increment the smaller of the two values to "catch up" to the other river.
*   Digital rivers are guaranteed to meet eventually (though usually very soon).
