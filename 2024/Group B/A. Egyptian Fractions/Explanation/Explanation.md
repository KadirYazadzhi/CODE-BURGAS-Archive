# Explanation: Egyptian Fractions

## Problem Analysis
An Egyptian fraction is a sum of distinct unit fractions (fractions with a numerator of 1). We need to decompose a given rational number $x/y$ into a sum of such unit fractions.

## Algorithmic Approach
The most common method is the **Greedy Algorithm for Egyptian Fractions** (also known as the Fibonacci-Sylvester algorithm).

1.  **Iterative Step**: For a fraction $x/y$:
    *   Find the smallest integer $n$ such that $1/n \le x/y$. This is equivalent to $n = \lceil y/x \rceil$.
    *   In C++, this can be calculated as `n = (y + x - 1) / x`.
    *   Output $1/n$.
    *   Calculate the remaining fraction: $x/y - 1/n = (x \cdot n - y) / (y \cdot n)$.
    *   Simplify the new fraction (using Greatest Common Divisor).
    *   Repeat with the new fraction until the numerator becomes 1.
2.  **Termination**: The algorithm terminates when the numerator of the remainder is 1.

## Complexity
*   **Time Complexity**: Generally small for most practical inputs, but can produce many terms for certain fractions.
*   **Space Complexity**: O(1) beyond storing the current fraction.

## Key Insights
*   Always use `long long` for calculations to prevent overflow when multiplying $y \cdot n$.
*   Simplifying the fraction after each step is essential to keep the numbers manageable.
