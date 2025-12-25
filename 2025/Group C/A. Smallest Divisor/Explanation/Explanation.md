# Explanation: Smallest Divisor

## Problem Analysis
Given an integer $N$, find its smallest divisor strictly greater than 1. This is essentially asking for the **smallest prime factor** (SPF) of $N$.

## Algorithmic Approach
1.  **Check 2**: If $N$ is even, the answer is 2.
2.  **Iterate Odds**: If $N$ is odd, iterate from $i = 3$ upwards, incrementing by 2.
    *   Check if $N \% i == 0$.
    *   If yes, $i$ is the answer.
    *   **Stop Condition**: We only need to check up to $\sqrt{N}$. If we reach $\sqrt{N}$ without finding a divisor, then $N$ itself is prime, and the answer is $N$.

## Complexity
*   **Time Complexity**: O(\sqrt{N}). In the worst case (N is prime), we loop up to square root of N.
*   **Space Complexity**: O(1).

## Key Insights
*   If a number $N$ has a divisor greater than 1, it must have a divisor $\le \sqrt{N}$.
