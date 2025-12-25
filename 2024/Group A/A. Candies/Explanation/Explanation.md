# Explanation: Candies

## Problem Analysis
Anna wants to maximize the number of candies she can buy with a budget $B$. The problem specifies a "greedy algorithm" approach: sort the candies by weight in **descending** order and buy them until the budget is exhausted.

## Algorithmic Approach
1.  **Read Input**: Budget $B$ and number of candies $N$. Then read the weight and value of each candy.
2.  **Sorting**: Sort the candies based on their **weight in descending order**.
3.  **Simulation**:
    *   Initialize `total_value = 0` and `remaining_budget = B`.
    *   Iterate through the sorted candies.
    *   For each candy, if `weight <= remaining_budget`:
        *   Subtract `weight` from `remaining_budget`.
        *   Add `value` to `total_value`.
4.  **Output**: Print `total_value` and `remaining_budget`.

## Complexity
*   **Time Complexity**: O(N log N) for sorting, and O(N) for the greedy selection.
*   **Space Complexity**: O(N) to store the candy data.

## Key Insights
*   Although the "Knapsack" problem (finding the absolute maximum value) usually requires Dynamic Programming, the problem text explicitly instructs to follow Anna's **greedy strategy** (heaviest first).
*   In competitive programming, always follow the specific logic described in the problem's "story" if it defines the algorithm to be used.
