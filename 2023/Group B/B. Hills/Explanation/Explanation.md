# Explanation: Hills

## Problem Analysis
Find the maximum sum of a contiguous subsequence of integers from a given sequence. This is the classic **Maximum Subarray Sum** problem.

## Algorithmic Approach
**Kadane's Algorithm** is the optimal solution for this problem.

1.  **State**:
    *   `current_max`: The maximum sum of a subarray ending at the current position.
    *   `global_max`: The maximum sum found so far across all positions.
2.  **Iterate**: For each height `h` in the sequence:
    *   Update `current_max`: `current_max = max(h, current_max + h)`.
    *   (This decides whether to extend the previous subarray or start a new one from `h`).
    *   Update `global_max`: `global_max = max(global_max, current_max)`.
3.  **Result**: `global_max` is the answer.

## Complexity
*   **Time Complexity**: O(N), where N is the number of hills. We traverse the list exactly once.
*   **Space Complexity**: O(1) beyond storing the input.

## Key Insights
*   Kadane's algorithm works even if there are negative numbers, as long as at least one element is used.
*   The story description exactly matches the logic of Kadane's algorithm ("decide at each step whether to add to existing subsequence or start a new one").
