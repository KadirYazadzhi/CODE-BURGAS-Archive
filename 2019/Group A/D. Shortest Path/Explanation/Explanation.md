# Explanation: Shortest Path

## Problem Analysis
Find the minimum cost path between two cities in a weighted graph where vertices are identified by names.

## Algorithmic Approach
1.  **Graph Representation**:
    *   Use a `std::map<string, int>` to map city names to unique integer IDs ($1 \dots N$).
    *   Use an adjacency list `adj[ID]` to store `(neighbor_ID, cost)` pairs.
2.  **Dijkstra's Algorithm**:
    *   For each query `NAME1 NAME2`:
        *   Get `start_ID` and `end_ID`.
        *   Run Dijkstra's algorithm to find the shortest path from `start_ID`.
        *   Maintain a `dist` array initialized to infinity.
        *   Use a priority queue to process vertices in order of increasing distance.
3.  **Output**: Print the final `dist[end_ID]`.

## Complexity
*   **Time Complexity**: O(S \cdot (R \cdot E \log V)), where $R$ is the number of queries. For $N=10000$ and $R=100$, this is approximately $10^7$ operations, which fits within time limits.
*   **Space Complexity**: O(V + E) to store the graph.

## Key Insights
*   Mapping strings to integers is necessary for efficient graph traversal.
*   Dijkstra's is the standard algorithm for shortest paths with non-negative weights.
