# Explanation: T-Shirts

## Problem Analysis
Given the heights of $N$ students, find the minimum and maximum height among them.

## Algorithmic Approach
1.  **Read Input**: First read the count $N$.
2.  **Initialization**:
    *   Set `min_height` to a very large value (or the first student's height).
    *   Set `max_height` to a very small value (or the first student's height).
3.  **Iterate**: Loop through all $N$ heights.
    *   If `current_height < min_height`, update `min_height`.
    *   If `current_height > max_height`, update `max_height`.
4.  **Output**: Print `min_height` and `max_height`.

## Complexity
*   **Time Complexity**: O(N), as we examine each height once.
*   **Space Complexity**: O(1), since we only need to store current min/max values.

## Key Insights
*   The problem is a straightforward application of finding the extrema in a set.
