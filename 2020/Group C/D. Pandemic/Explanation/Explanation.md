# Explanation: Pandemic

## Problem Analysis
A teacher gives a bonus of +1 grade to students whose birthday month matches the test month, up to a maximum grade of 6.

## Algorithmic Approach
1.  **Read Input**:
    *   Birthday: `day`, `birth_month`.
    *   Test: `test_month`, `current_grade`.
2.  **Check Condition**:
    *   If `birth_month == test_month`:
        *   If `current_grade < 6`, then `new_grade = current_grade + 1`.
        *   Else, `new_grade = 6`.
    *   Else:
        *   `new_grade = current_grade`.
3.  **Output**: Print `new_grade`.

## Complexity
*   **Time Complexity**: O(1).
*   **Space Complexity**: O(1).

## Key Insights
*   The bonus only applies if the months match.
*   A grade of 6 is the maximum and cannot be increased.
