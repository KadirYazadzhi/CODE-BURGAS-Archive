# Explanation: Sums

## Problem Analysis
For a given string representing an integer, consider all pairs of adjacent digits. Calculate their sums and find the minimum and maximum among these sums.

## Algorithmic Approach
1.  **Iterate**: For each number $S$:
    *   Initialize `min_sum = 18` and `max_sum = 0`.
    *   If the length of $S$ is 1, the min and max sum are not defined (or handled as 0/0 or the digit itself). Usually, the problem implies numbers with $\ge 2$ digits.
    *   Loop through the string from $i = 0$ to `length - 2`:
        *   Convert $S[i]$ and $S[i+1]$ to integers: `d1 = S[i] - '0'`, `d2 = S[i+1] - '0'`.
        *   `sum = d1 + d2`.
        *   Update `min_sum = min(min_sum, sum)`.
        *   Update `max_sum = max(max_sum, sum)`.
2.  **Output**: Print `min_sum` and `max_sum`.

## Complexity
*   **Time Complexity**: O(L) per number, where L is the number of digits.
*   **Space Complexity**: O(L) to store the number string.

## Key Insights
*   Adjacent digits at indices $i$ and $i+1$ form the consecutive pairs.
*   For a 2-digit number, the min and max sum will be the same.
