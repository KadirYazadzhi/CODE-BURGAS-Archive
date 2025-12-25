# Explanation: The Penguins Party

## Problem Analysis
We need to find the maximum sum of a subset of numbers from an array such that no two selected numbers are adjacent. This is a classic **Dynamic Programming** problem.

## Algorithmic Approach
1.  **State**: Let `dp[i]` be the maximum sum obtainable using elements from index `0` to `i`.
2.  **Transitions**: For each penguin `i`:
    *   **Option 1**: Don't include penguin `i`. The sum is the same as `dp[i-1]`.
    *   **Option 2**: Include penguin `i`. We cannot include penguin `i-1`, so the sum is `arr[i] + dp[i-2]`.
    *   Therefore: `dp[i] = max(dp[i-1], arr[i] + dp[i-2])`.
3.  **Base Cases**:
    *   `dp[0] = arr[0]` (if non-negative).
    *   `dp[1] = max(arr[0], arr[1])`.
4.  **Space Optimization**: Since we only need the last two values, we can use two variables instead of an entire array.

## Complexity
*   **Time Complexity**: O(N), where N is the number of penguins. We iterate through the list once.
*   **Space Complexity**: O(1) with space optimization, or O(N) with an array.

## Key Insights
*   This logic correctly handles cases where it's better to skip multiple elements to reach a very large value later.
*   The problem is equivalent to the "House Robber" problem on LeetCode.
