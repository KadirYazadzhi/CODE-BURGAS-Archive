# Explanation: Market

## Problem Analysis
Manage turnover data for $N$ stores with two operations:
1.  Update the turnover of a specific store (`A P V`).
2.  Query the sum of turnovers in a range $[L, R]$ (`B L R`).

## Algorithmic Approach
With $N=10^5$ and $Q=3 \times 10^5$, a simple array would make updates $O(1)$ but queries $O(N)$, leading to $O(N \cdot Q)$ worst case ($3 \times 10^{10}$), which is too slow.

We use a **Binary Indexed Tree (Fenwick Tree)** or a **Segment Tree**.

1.  **Fenwick Tree (BIT)**:
    *   `update(p, v)`: Adds value `v` to the store `p`. This operation takes $O(\log N)$.
    *   `query(p)`: Returns the prefix sum from 1 to `p`. This operation takes $O(\log N)$.
    *   `range_query(L, R)`: Returns `query(R) - query(L - 1)`.
2.  **Initialization**: All stores start with 0 turnover.
3.  **Processing**:
    *   For each 'A' query: Call `update(P, V)`.
    *   For each 'B' query: Call and print `range_query(L, R)`.

## Complexity
*   **Time Complexity**: O(Q \log N). With $N=10^5$, $\log N \approx 17$. $3 \times 10^5 \times 17 \approx 5 \times 10^6$, which easily fits in under 0.1s.
*   **Space Complexity**: O(N) to store the tree.

## Key Insights
*   The Fenwick Tree is very compact and fast for point updates and prefix sums.
*   Store numbers are 1-indexed, which fits the standard implementation of a BIT perfectly.
