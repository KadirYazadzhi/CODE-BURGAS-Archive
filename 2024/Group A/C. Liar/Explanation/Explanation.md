# Explanation: Liar

## Problem Analysis
We are given $N$ objects, each at coordinates $(X, Y)$ and having a danger level $L 
in \{1, 2, 3, 4, 5\}$. We receive $Q$ queries, each specifying an outbreak $(X_q, Y_q)$ of level $L_q$ and a number $K_q$. For each query, we must find the $K_q$ closest objects of level $L_q$ and sum their squared Euclidean distances. Finally, we output the total sum of these results.

## Algorithmic Approach
With $N=50,000$ and $Q=500,000$, a linear search per query ($O(N \cdot Q)$) would be too slow ($2.5 \times 10^{10}$ operations).

1.  **Grouping**: Group the $N$ objects into 5 separate lists based on their danger level $L$.
2.  **Spatial Indexing**: For each level, build a spatial data structure. Since $K$ is very small ($K \le 10$), a **K-D Tree** or a **Vantage Point Tree** is ideal.
    *   Alternatively, because the coordinates are in a small range $[-1, 1]$, a **Grid-based index** or simply sorting could work if the distribution is uniform.
3.  **Querying**:
    *   For each query $(X, Y, L, K)$, search in the K-D Tree of level $L$ for the $K$ nearest neighbors (KNN).
    *   Calculate the squared distance to each of the $K$ neighbors: $(X - X_i)^2 + (Y - Y_i)^2$.
    *   Sum these squared distances.
4.  **Accumulation**: Keep a running total of all query results and format the final answer to 4 decimal places.

## Complexity
*   **Time Complexity**: O(N log N) to build trees + O(Q \cdot K log N) for queries. This is roughly $500,000 \times 10 \times 15 \approx 7.5 \times 10^7$ operations, which fits within time limits.
*   **Space Complexity**: O(N) to store the objects and trees.

## Key Insights
*   Squared distance calculation avoids the `sqrt` function, which is faster and requested by the problem.
*   Separating by level $L$ reduces the search space for each query.
