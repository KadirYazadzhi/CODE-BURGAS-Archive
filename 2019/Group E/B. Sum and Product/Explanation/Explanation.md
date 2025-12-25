# Explanation: Sum and Product

## Problem Analysis
Given a four-digit integer, calculate the sum and the product of its digits.

## Algorithmic Approach
1.  **Extract Digits**:
    *   The digits $d_1, d_2, d_3, d_4$ can be extracted using modulo and division:
        *   `d4 = n % 10`
        *   `d3 = (n / 10) % 10`
        *   `d2 = (n / 100) % 10`
        *   `d1 = (n / 1000) % 10`
    *   Alternatively, read the number as a string and process each character.
2.  **Calculate**:
    *   `sum = d1 + d2 + d3 + d4`.
    *   `product = d1 * d2 * d3 * d4`.
3.  **Output**: Print the sum and product on separate lines.

## Complexity
*   **Time Complexity**: O(1).
*   **Space Complexity**: O(1).

## Key Insights
*   Modulo 10 gives the last digit, and dividing by 10 "shifts" the number to the right.
