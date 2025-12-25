# Explanation: Birthday

## Problem Analysis
Calculate the number of days between two dates within the same year.

## Algorithmic Approach
1.  **Month Days**: Define an array of days for each month in a standard year:
    *   `[31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]`.
2.  **Date to Day Number**: Create a function `dayOfYear(day, month)`:
    *   Sum the days of all months preceding `month`.
    *   Add the `day`.
3.  **Calculation**:
    *   `result = dayOfYear(day2, month2) - dayOfYear(day1, month1)`.
4.  **Output**: Print the result.

## Complexity
*   **Time Complexity**: O(1).
*   **Space Complexity**: O(1).

## Key Insights
*   The problem assumes both dates are in the same year.
*   The example `2 2` to `3 2` results in 1, indicating we subtract the starting day index from the ending day index.
