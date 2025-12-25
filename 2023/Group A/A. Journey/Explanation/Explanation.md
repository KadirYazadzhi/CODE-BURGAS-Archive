# Explanation: Journey

## Problem Analysis
Find the shortest path distance between a starting point $S$ and an ending point $T$ on a weighted map.

## Algorithmic Approach
Since the edges have positive weights $W$, **Dijkstra's Algorithm** is the standard and most efficient choice.

1.  **Graph Representation**: Use an adjacency list where each entry `adj[u]` contains pairs `(v, w)`.
2.  **Dijkstra's Initialization**:
    *   `dist` array initialized to infinity, `dist[S] = 0`.
    *   A priority queue (min-heap) storing `(distance, vertex)` pairs.
3.  **Process**:
    *   Push `(0, S)` to the priority queue.
    *   While the queue is not empty:
        *   Pop the vertex `u` with the smallest `dist[u]`.
        *   If the popped distance is greater than the current `dist[u]`, skip it.
        *   For each neighbor `v` with edge weight `w`:
            *   If `dist[u] + w < dist[v]`:
                *   `dist[v] = dist[u] + w`.
                *   Push `(dist[v], v)` to the queue.
4.  **Result**: The value `dist[T]` is the shortest distance.

## Complexity
*   **Time Complexity**: O(E log V), where V is the number of points and E is the number of routes.
*   **Space Complexity**: O(V + E) for the adjacency list and distance array.

## Key Insights
*   Dijkstra's algorithm is optimal for single-source shortest paths in graphs with non-negative edge weights.
