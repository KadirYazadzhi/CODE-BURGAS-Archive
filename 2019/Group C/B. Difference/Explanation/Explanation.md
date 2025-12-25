# Explanation: Difference

## Problem Analysis
A mother is $A$ years older than her child. We need to find all child ages $i \in [1, Y]$ such that the child's age $i$ divides the mother's age ($A+i$) without a remainder.

## Algorithmic Approach
1.  **Mathematical Insight**:
    *   We want $(A + i) \pmod i == 0$.
    *   This is equivalent to $A \pmod i + i \pmod i == 0$.
    *   Since $i \pmod i$ is always $0$, the condition simplifies to **$A \pmod i == 0$**.
    *   The child's age $i$ must be a **divisor of $A$**.
2.  **Iterate**:
    *   Loop through child ages $i$ from 1 to $Y$.
    *   If `A % i == 0`:
        *   Print the mother's age at that time: `A + i`.
3.  **Output**: Print the collected mother's ages separated by spaces.

## Complexity
*   **Time Complexity**: O(Y).
*   **Space Complexity**: O(1).

## Key Insights
*   The property of divisibility allows us to focus only on the fixed age difference $A$.
*   As the child grows, the mother's age is always $i$ years more than the child's.
