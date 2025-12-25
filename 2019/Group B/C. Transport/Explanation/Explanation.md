# Explanation: Transport

## Problem Analysis
Find the shortest path between two bus stops $S$ and $E$ in a weighted graph and multiply the distance by a price $P$.

## Algorithmic Approach
1.  **Graph Representation**:
    *   The input is provided as an $N \times N$ adjacency matrix.
    *   If `matrix[i][j] == -1`, there is no direct connection.
2.  **Shortest Path**:
    *   Since $N \le 100$, use **Floyd-Warshall** to find all-pairs shortest paths in O(N^3).
    *   Alternatively, use **Dijkstra** from the starting stop $S$.
3.  **Cost Calculation**:
    *   Total Cost = `shortest_distance(S, E) * price_per_km`.
4.  **Output**: Format the result to 2 decimal places.

## Complexity
*   **Time Complexity**: O(N^3) for Floyd-Warshall.
*   **Space Complexity**: O(N^2) for the distance matrix.

## Key Insights
*   The adjacency matrix might contain non-integer distances (e.g., 0.5 km), so use `double`.
*   Floating point precision should be handled with `fixed` and `setprecision(2)`.
