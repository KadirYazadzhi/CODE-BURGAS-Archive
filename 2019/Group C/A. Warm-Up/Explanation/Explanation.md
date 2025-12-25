# Explanation: Warm-Up

## Problem Analysis
Given daily temperatures for $N$ days, find the maximum number of consecutive days where the temperature strictly increases.

## Algorithmic Approach
1.  **Iterate**: Traverse the temperature list starting from the second day.
2.  **Comparison**:
    *   Initialize `current_streak = 1` and `max_streak = 1`.
    *   For each day $i$:
        *   If `temp[i] > temp[i-1]`:
            *   `current_streak++`.
        *   Else:
            *   `max_streak = max(max_streak, current_streak)`.
            *   `current_streak = 1`.
3.  **Final Update**: After the loop, perform one last update: `max_streak = max(max_streak, current_streak)`.
4.  **Output**: Print `max_streak`.

## Complexity
*   **Time Complexity**: O(N).
*   **Space Complexity**: O(N) to store temperatures (or O(1) if processed in a stream).

## Key Insights
*   A "strictly increasing" sequence means $T_i > T_{i-1}$. If two consecutive days have the same temperature, the streak is broken.
