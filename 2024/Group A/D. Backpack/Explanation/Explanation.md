# Explanation: Backpack

## Problem Analysis
This is the classic **0/1 Knapsack Problem**. Given $N$ items with specific weights and values, and a backpack with capacity $W$, find the maximum total value possible without exceeding $W$.

## Algorithmic Approach
**Dynamic Programming** is the standard solution.

1.  **State**: Let `dp[i][j]` be the maximum value that can be obtained using a subset of the first `i` items with a total weight not exceeding `j`.
2.  **Transitions**:
    *   If we don't take item `i`: `dp[i][j] = dp[i-1][j]`
    *   If we take item `i` (and `weight[i] <= j`): `dp[i][j] = max(dp[i-1][j], dp[i-1][j - weight[i]] + value[i])`
3.  **Space Optimization**: Since `dp[i]` only depends on `dp[i-1]`, we can use a 1D array `dp[j]`.
    *   Iterate through items $i = 1 \dots N$.
    *   For each item, iterate through weights $j = W \dots weight[i]$ (backwards).
    *   `dp[j] = max(dp[j], dp[j - weight[i]] + value[i])`.
4.  **Result**: The answer is `dp[W]`.

## Complexity
*   **Time Complexity**: O(N \cdot W).
*   **Space Complexity**: O(W) with the 1D array optimization.

## Key Insights
*   The backwards iteration in the 1D array is crucial to ensure each item is used at most once (0/1 Knapsack).
*   The example provided in the problem description had a slight discrepancy in the explanation text, but the logic remains standard.
