# Explanation: Drone

## Problem Analysis
We have $N$ buildings on a street. A pilot at the start of the street only sees buildings that are taller than all preceding buildings. A drone of length $L$ can hide behind a visible building if there's enough space (hidden buildings) behind it.

## Algorithmic Approach
1.  **Identify Visible Buildings**:
    *   Initialize `max_height = 0`.
    *   Iterate from index $1$ to $N$.
    *   If `H[i] > max_height`:
        *   Building `i` is **visible**.
        *   Update `max_height = H[i]`.
2.  **Check Hiding Capacity**:
    *   For each visible building at index $i$, count how many consecutive non-visible buildings follow it.
    *   Count `hidden_count = 0`.
    *   Iterate from $i+1$ onwards. As long as `H[j]` is not visible, increment `hidden_count`.
    *   If `hidden_count >= L`, then building `i` is a valid answer.
3.  **Output**: List the numbers of the valid visible buildings in ascending order. If none, print "NO".

## Complexity
*   **Time Complexity**: O(N), as we pass through the building list.
*   **Space Complexity**: O(N) to store heights and visibility status.

## Key Insights
*   Visibility is determined by prefix maximums.
*   The "drone length L" requires $L$ consecutive non-visible buildings directly after a visible one.
