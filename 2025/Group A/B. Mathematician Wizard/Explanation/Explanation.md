# Explanation: Mathematician Wizard

## Problem Analysis
We are given an integer $N$ and need to determine if it can be represented as the sum of **two different** prime numbers.

## Algorithmic Approach
1.  **Prime Generation**: First, we need an efficient way to check if numbers up to $N$ are prime. Since $N \le 10^6$, we can use the **Sieve of Eratosthenes** to precompute primality for all numbers up to $10^6$.
2.  **Check Pairs**:
    *   We iterate through all numbers $p$ starting from 2 up to $N/2$.
    *   For each $p$, check if it is prime.
    *   If $p$ is prime, calculate the complement $q = N - p$.
    *   Check if $q$ is also prime.
    *   **Crucial Condition**: The problem specifies "two different" prime numbers, so we must ensure $p \neq q$ (i.e., $p \neq N/2$).
    *   If both $p$ and $q$ are prime and $p \neq q$, then the answer is `YES`.
3.  **Result**: If the loop completes without finding such a pair, the answer is `NO`.

## Complexity
*   **Time Complexity**: O(N log log N) for the Sieve of Eratosthenes, and then O(N) (or O(N/log N) considering prime density) for the check loop. This is well within the time limits for $N=10^6$.
*   **Space Complexity**: O(N) to store the sieve boolean array.

## Key Insights
*   Since addition is commutative, we only need to check $p$ up to $N/2$.
*   We must handle the "different" condition explicitly.
