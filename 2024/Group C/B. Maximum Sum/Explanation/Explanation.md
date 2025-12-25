# Explanation: Maximum Sum

## Problem Analysis
Find the maximum sum of elements in a subarray (or rather, a subsequence) such that no two selected elements are consecutive. This is identical to the "Penguins Party" problem from Group B.

## Algorithmic Approach
**Dynamic Programming** is the optimal choice.

1.  **State**: `dp[i]` is the maximum sum possible considering elements from index `0` to `i`.
2.  **Transitions**:
    *   Exclude element `i`: Sum is `dp[i-1]`.
    *   Include element `i`: Sum is `arr[i] + dp[i-2]`.
    *   `dp[i] = max(dp[i-1], arr[i] + dp[i-2])`.
3.  **Base Cases**:
    *   `dp[0] = arr[0]`.
    *   `dp[1] = max(arr[0], arr[1])`.
4.  **Space Optimization**: Only the last two values are needed, so we can use two variables.

## Complexity
*   **Time Complexity**: O(N).
*   **Space Complexity**: O(1) or O(N).

## Key Insights
*   While the problem uses the word "subarray", the constraint "without using two consecutive elements" implies we are picking a non-contiguous subsequence.
