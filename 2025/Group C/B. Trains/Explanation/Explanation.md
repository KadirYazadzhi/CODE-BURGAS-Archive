# Explanation: Trains

## Problem Analysis
We need to calculate $V = (A \cdot x + B) / (C \cdot x + D)$ and handle two specific error cases:
1.  Division by zero: If the denominator is 0.
2.  Non-integer result: If the numerator is not perfectly divisible by the denominator.

## Algorithmic Approach
1.  **Calculate Numerator**: `num = A * x + B`.
2.  **Calculate Denominator**: `denom = C * x + D`.
3.  **Check Zero**:
    *   If `denom == 0`, print "ZERO ERROR".
    *   Return/Exit.
4.  **Check Divisibility**:
    *   If `num % denom != 0`, print "NAN ERROR". (The problem asks for integer results only).
    *   Return/Exit.
5.  **Calculate & Print**:
    *   `V = num / denom`.
    *   Print `V` followed by " km/h".

## Complexity
*   **Time Complexity**: O(1). basic arithmetic operations.
*   **Space Complexity**: O(1).

## Key Insights
*   Order of checks matters (check zero denominator first).
*   Use integer modulo `%` to check for divisibility.
