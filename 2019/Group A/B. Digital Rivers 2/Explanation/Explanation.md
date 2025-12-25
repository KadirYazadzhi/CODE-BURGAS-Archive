# Explanation: Digital Rivers 2

## Problem Analysis
A Digital River starts at $K$ and each next number is $K + \text{sumOfDigits}(K)$. A number $R1$ is an intersection point if it can be reached from at least one *other* starting number $p < R1$.

## Algorithmic Approach
1.  **Condition for Intersection**:
    *   A number $R1$ is an intersection point if there exists some $p < R1$ such that $p + \text{sumDigits}(p) = R1$.
    *   If such a $p$ exists, then the river starting at $p$ will contain $R1$. Since the river starting at $R1$ also contains $R1$ (as its first element), $R1$ is an intersection of at least two rivers.
2.  **Iterative Check**:
    *   For a given $R1$, check all numbers $p$ in the range $[R1 - 50, R1 - 1]$ (a number and its sum of digits can't differ by more than about 45 for $R1 < 100,000$).
    *   For each $p$, calculate $p + \text{sumDigits}(p)$.
    *   If any result equals $R1$, output `YES`.
3.  **Result**: If no such $p$ is found, output `NO`.

## Complexity
*   **Time Complexity**: O(N \cdot \log R1) or $O(N · 50)$.
*   **Space Complexity**: O(1).

## Key Insights
*   The search range for $p$ is small because the sum of digits for $R1 < 100,000$ is at most $9 \times 5 = 45$.
*   This problem essentially asks: "Is $R1$ a term in some other digital river?"
