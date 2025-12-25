# Explanation: Blackjack

## Problem Analysis
Given $N$ numbers, choose exactly three numbers such that their sum is $\le M$ and as large as possible.

## Algorithmic Approach
1.  **Triple Loop**: Since $N$ is small ($N \le 100$), a brute-force approach checking all triplets is efficient.
    *   `best_sum = -1`.
    *   For $i = 0 \dots N-1$:
        *   For $j = i+1 \dots N-1$:
            *   For $k = j+1 \dots N-1$:
                *   `current_sum = arr[i] + arr[j] + arr[k]`.
                *   If `current_sum <= M`:
                    *   `best_sum = max(best_sum, current_sum)`.
2.  **Output**: Print `best_sum`.

## Complexity
*   **Time Complexity**: O(N^3). For $N=100$, this is $10^6$ operations, which is well within the 1-second limit.
*   **Space Complexity**: O(N) to store the input numbers.

## Key Insights
*   The condition "as close as possible to, but not exceeding" means we want the maximum value in the range $[0, M]$.
*   Sorting the array can allow for optimizations (like using two pointers for the inner two loops), but $N^3$ is sufficient here.
