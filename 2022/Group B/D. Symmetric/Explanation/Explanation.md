# Explanation: Symmetric

## Problem Analysis
Count how many palindromic numbers (symmetric) exist between 1 and $N$, where $N$ can be as large as $10^{18}$.

## Algorithmic Approach
For $N = 10^{18}$, we cannot iterate. We use a combinatorial approach.

1.  **Full Palindromes of length $L$**:
    *   A palindrome of length $L$ is determined by its first $\lceil L/2 \rceil$ digits.
    *   The first digit must be $1-9$ (9 choices).
    *   Other digits can be $0-9$ (10 choices each).
    *   Total count for length $L = 9 \times 10^{\lceil L/2 \rceil - 1}$.
2.  **Palindromes of length $D$ (where $D$ is length of $N$) up to $N$**:
    *   Take the first $K = \lceil D/2 \rceil$ digits of $N$. Let this be `prefixN`.
    *   Count how many $K$-digit numbers $p$ are there such that $10^{K-1} \le p < prefixN$. Each such $p$ forms exactly one $D$-digit palindrome less than $N$.
    *   Check the palindrome formed by `prefixN` itself. If it is $\le N$, add 1.
3.  **Total**: Sum the counts for all lengths $1 \dots D-1$ and the partial count for length $D$.

## Complexity
*   **Time Complexity**: O(log_{10} N), as we only process the digits of $N$.
*   **Space Complexity**: O(log_{10} N).

## Key Insights
*   The property that the first half determines the whole palindrome allows us to count them by counting their prefixes.
*   Example: For $N=25$, lengths are 1 and 2.
    *   Len 1: 1, 2, 3, 4, 5, 6, 7, 8, 9 (Total 9)
    *   Len 2: Prefixes $1 \dots 2$. Palindrome from 1 is 11 ($\le 25$). Palindrome from 2 is 22 ($\le 25$). (Total 2)
    *   Result: $9 + 2 = 11$.
    
