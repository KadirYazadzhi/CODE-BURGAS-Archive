# Explanation: The Diligent Cleaner

## Problem Analysis
Maximize earnings in exactly 20 hours given several work requests, each with a time requirement and a payment.

## Algorithmic Approach
This is the **0/1 Knapsack Problem** where the capacity is fixed at 20 hours.

1.  **State**: `dp[t]` is the maximum money earned using `t` hours.
2.  **Transitions**:
    *   Initialize `dp[0...20] = 0`.
    *   For each request $(H, M)$:
        *   Iterate backwards from $t = 20$ down to $H$:
        *   `dp[t] = max(dp[t], dp[t - H] + M)`.
3.  **Result**: The value `dp[20]` (or `max(dp)` if exactly 20 is not required).

## Complexity
*   **Time Complexity**: O(N \cdot T), where $N$ is the number of requests and $T=20$. This is extremely fast ($100 \times 20 = 2000$ operations).
*   **Space Complexity**: O(T) to store the DP array.

## Key Insights
*   The backwards loop in the DP is essential to ensure each request is used at most once.
*   Given the very small constraint (20 hours), this problem is a perfect fit for a simple 1D DP.
