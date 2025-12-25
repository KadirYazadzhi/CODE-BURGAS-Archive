# Explanation: Zeros

## Problem Analysis
Count how many times the digit '0' is used in all integers from 1 to $N$. $N$ can be up to $10^{16}$.

## Algorithmic Approach
For $N=10^{16}$, we need a **Digit DP** or a mathematical counting method.

1.  **Counting Zeros per Position**:
    *   Consider the $k$-th digit from the right (1-based). Let the number be split into `prefix`, `digit`, and `suffix` at this position.
    *   Example for $N=250$, position $k=1$ (units):
        *   `prefix = 25`, `digit = 0`, `suffix = ""`
        *   `prefix` can range from $1$ to $25$. For each value in $1 \dots 24$, we can have a zero at the end (24 times). For prefix 25, we have one zero (250). Total 25.
    *   General rule for digit '0' at a position:
        *   Zeros are not counted as leading zeros.
        *   Count = `(prefix - 1) * 10^(k-1) + (digit > 0 ? 10^(k-1) : suffix + 1)`.
2.  **Iterate**: Apply this logic for every digit position in $N$.
3.  **Sum**: The sum of counts across all positions is the final answer.

## Complexity
*   **Time Complexity**: O(log_{10} N).
*   **Space Complexity**: O(log_{10} N).

## Key Insights
*   Counting zeros is trickier than other digits because zeros cannot be leading.
*   The formula handles how many times a '0' appears at a specific power-of-ten position while keeping the total value $\le N$.
