# Explanation: Mobile Deal

## Problem Analysis
Gosho receives $X$ MB of data every month. Unused data from one month carries over to the next. We need to find the final balance at the beginning of month $N+1$.

## Algorithmic Approach
1.  **Iterate**: For each month $i = 1 \dots N$:
    *   Add $X$ to the `current_balance`.
    *   Subtract the data used in that month $P_i$.
    *   `current_balance = current_balance + X - P_i`.
2.  **Final Month**: At the start of month $N+1$, Gosho receives another $X$ MB.
    *   `final_balance = current_balance + X`.
3.  **Output**: Print `final_balance`.

## Complexity
*   **Time Complexity**: O(N) per test case.
*   **Space Complexity**: O(1).

## Key Insights
*   The data rollover is additive.
*   The question specifically asks for the balance *after* receiving the $(N+1)$-th month's allowance.
