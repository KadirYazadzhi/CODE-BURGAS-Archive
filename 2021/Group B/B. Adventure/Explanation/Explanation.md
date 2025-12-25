# Explanation: Adventure

## Problem Analysis
Find a path from city 1 to city $M$ that minimizes total train ticket costs and walking distances. For each city, we must walk from intersection 1 to intersection $N_i$.

## Algorithmic Approach
1.  **Precompute Walking**:
    *   For each city $i$, use **BFS** to find the shortest path from intersection 1 to $N_i$.
    *   Let $W_i$ be this minimum walking distance.
2.  **Shortest Path in Cities Graph**:
    *   The cities and train connections form a directed graph.
    *   Edge cost $(T, W_y)$: Train from $X$ to $Y$ costs $T$, and arriving at $Y$ incurs walking cost $W_y$.
    *   We want to minimize $\sum T$ first, then $\sum W$.
3.  **Dijkstra's Algorithm**:
    *   Run Dijkstra from city 1.
    *   `dist[city]` = `{min_total_tickets, min_total_walking}`.
    *   When relaxing edges, use lexicographical comparison for the pair of costs.
4.  **Path Reconstruction**:
    *   Use `parent` pointers to store the sequence of cities.
    *   For each city in the final path, also output the BFS path found in step 1.

## Complexity
*   **Time Complexity**: O(M \cdot (V_{city} + E_{city})) for all BFS runs + O(K \log M) for Dijkstra.
*   **Space Complexity**: O(M \cdot V_{city} + K).

## Key Insights
*   The "walking" part is a simple BFS because all streets have the same length.
*   Handling the city path and the internal street paths separately makes the logic much cleaner.
