# Explanation: Croissants

## Problem Analysis
Given an interval $[X, Y]$ and a number of participants $N$, find the largest integer $k \in [X, Y]$ such that $k \pmod N$ is maximized.

## Algorithmic Approach
1.  **Iterate and Calculate**:
    *   Iterate through all integers $i$ from $Y$ down to $X$.
    *   Calculate $rem = i \pmod N$.
    *   Keep track of the `max_remainder` found so far and the number `best_k` that produced it.
    *   Since we iterate from $Y$ downwards, the first number we find that achieves the `max_remainder` is guaranteed to be the largest such number.
2.  **Output**: Print `best_k`.

## Complexity
*   **Time Complexity**: O(Y - X) per test case. With $X, Y \le 100$, this is extremely fast.
*   **Space Complexity**: O(1).

## Key Insights
*   The goal is a two-step optimization: first maximize the remainder, then maximize the number itself.
*   The range is small enough for a simple linear scan.
