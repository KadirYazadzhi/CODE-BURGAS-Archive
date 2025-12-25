# Explanation: Codograd Square

## Problem Analysis
A square has side length $N$. Each square meter can accommodate 4 people. Calculate the total capacity.

## Algorithmic Approach
1.  **Area**: The area of a square is $N \times N$.
2.  **Capacity**: The total number of people is $Area \times 4$.
3.  **Calculation**: `result = N * N * 4`.
4.  **Output**: Print the result for each test case.

## Complexity
*   **Time Complexity**: O(1) per test case.
*   **Space Complexity**: O(1).

## Key Insights
*   Given $N \le 10000$, $N^2 = 10^8$, so $N^2 \times 4 = 4 \times 10^8$. This fits comfortably in a standard 32-bit `int` (up to $2 \times 10^9$) or 64-bit `long long`.
