# Explanation: Presents

## Problem Analysis
$N$ students buy up to 3 presents for others. We need to calculate the total cost (3 leva per present) and identify students who received fewer than 2 presents.

## Algorithmic Approach
1.  **Data Structures**:
    *   `received_count[N+1]` initialized to 0.
    *   `total_presents = 0`.
2.  **Counting**:
    *   For each student $i = 1 \dots N$:
        *   Read the IDs of the 3 students they gave presents to: $A, B, C$.
        *   For each non-zero ID:
            *   `received_count[ID]++`.
            *   `total_presents++`.
3.  **Result Calculation**:
    *   `total_cost = total_presents * 3`.
    *   Iterate through `received_count` from $1$ to $N$.
    *   Collect IDs where `received_count[id] < 2`.
4.  **Output**: Print `total_cost` followed by the sorted list of student IDs.

## Complexity
*   **Time Complexity**: O(N).
*   **Space Complexity**: O(N).

## Key Insights
*   Zero in the input simply means that specific gift slot was not used.
*   The problem focuses on tracking incoming gifts for each recipient.
