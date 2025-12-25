# Explanation: Transport Trouble

## Problem Analysis
Find the shortest path between stops $A$ and $B$ given a maximum number of bus changes $K$. This is a shortest path problem with a constraint on the number of edges used.

## Algorithmic Approach
With $N < 70$, the graph is very small.

1.  **Constraint Check**:
    *   If $K \ge N - 1$, the constraint on $K$ is irrelevant because any shortest path in a graph with $N$ nodes has at most $N-1$ edges. In this case, use the **Floyd-Warshall** algorithm to find all-pairs shortest paths in O(N^3).
2.  **Limited Edge Path (DP)**:
    *   If $K$ is small, use Dynamic Programming: `dp[k][i][j]` is the shortest path from $i$ to $j$ using exactly (or at most) $k$ edges.
    *   `dp[k][i][j] = min(dp[k-1][i][m] + weight(m, j))` for all $m$.
    *   This is equivalent to matrix multiplication in the "min-plus" semiring. We can use binary exponentiation to compute `dp[K]` in O(N^3 log K).
3.  **Result**:
    *   For each query $(c, d)$, output `dist[c][d]` from the calculated shortest path matrix. If the value is still "infinity", output -1.

## Complexity
*   **Time Complexity**: O(N^3 log K) or O(N^3) depending on $K$. With $N=70$, $N^3 \approx 3.4 \times 10^5$, which is very fast.
*   **Space Complexity**: O(N^2) to store the distance matrix.

## Key Insights
*   For small $N$, all-pairs shortest path algorithms are preferred.
*   "At most K buses" means paths with length 1, 2, ..., K.
