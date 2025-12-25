# Explanation: Friendly Numbers

## Problem Analysis
Two numbers $A$ and $B$ are "friendly" (more commonly known as **Amicable Numbers**) if:
1.  Sum of proper divisors of $A$ == $B$.
2.  Sum of proper divisors of $B$ == $A$.

## Algorithmic Approach
1.  **Sum of Divisors Function**: Create a helper function `sumDivisors(n)` that calculates the sum of all proper divisors of `n`.
    *   Iterate from `i = 1` to `sqrt(n)`.
    *   If `n % i == 0`:
        *   Add `i` to sum.
        *   If `i * i != n` and `i != 1`, add `n / i` to sum (this adds the pair divisor).
    *   *Note*: The definition usually excludes the number itself, so we sum up to `n/2` or use the sqrt method carefully (excluding `n`).
2.  **Check Condition**:
    *   Calculate `sumA = sumDivisors(A)`.
    *   Calculate `sumB = sumDivisors(B)`.
    *   Check if `sumA == B` AND `sumB == A`.
3.  **Output**: Print "YES" or "NO" (or result as requested).

## Complexity
*   **Time Complexity**: O(sqrt(A) + sqrt(B)) to calculate the sums of divisors.
*   **Space Complexity**: O(1).

## Key Insights
*   Proper divisors are all divisors excluding the number itself.
*   1 is a divisor for all positive integers.
