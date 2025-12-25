# Explanation: Doner

## Problem Analysis
Given $N$ bags of doners, distribute $M$ of them such that the difference between the largest and smallest bag among the chosen $M$ is minimized. Each friend gets one bag.

## Algorithmic Approach
1.  **Sorting**: Sort all $N$ bag sizes in ascending order.
2.  **Sliding Window**:
    *   Once sorted, the $M$ bags that result in the minimum difference must be **contiguous** in the sorted array.
    *   Iterate through all possible contiguous subarrays of length $M$.
    *   For each index $i$ from $0$ to $N - M$:
        *   `diff = arr[i + M - 1] - arr[i]`.
        *   Keep track of the `min_diff` found.
3.  **Output**: Print `min_diff`.

## Complexity
*   **Time Complexity**: O(N \log N) for sorting, and O(N) for the scan.
*   **Space Complexity**: O(N) to store the bag sizes.

## Key Insights
*   Sorting is essential because any optimal set of $M$ bags will have a spread determined by its smallest and largest members; selecting elements in between from the sorted list can only help or stay the same, but never hurt.
