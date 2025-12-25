# Explanation: Graphland

## Problem Analysis
The problem asks for the shortest path from vertex $A$ to vertex $B$ in a directed graph with $N$ vertices and $M$ edges. The edges are likely unweighted based on the "shortest path" wording without mentioning distances/costs, implying number of edges. If edges had weights, it would be Dijkstra; if unweighted, BFS. Given the "time is of the essence" and typical competitive contexts for this level, let's assume unweighted (BFS) or standard Dijkstra if weights are implied.
*Assuming Unweighted for shortest path in edges:*

## Algorithmic Approach
**Breadth-First Search (BFS)** is optimal for finding the shortest path (minimum number of edges) in an unweighted graph.

1.  **Graph Representation**: Adjacency list `adj[N]`.
2.  **BFS Initialization**:
    *   Queue `q` pushing start node `A`.
    *   `dist` array initialized to infinity, `dist[A] = 0`.
    *   Optional: `parent` array to reconstruct the path.
3.  **Process**:
    *   While `q` is not empty, pop node `u`.
    *   If `u == B`, we found the target (stop if just length needed).
    *   For each neighbor `v` of `u`:
        *   If `dist[v]` is infinity (unvisited):
            *   `dist[v] = dist[u] + 1`
            *   `parent[v] = u`
            *   Push `v` to `q`.
4.  **Output**: `dist[B]`. If `dist[B]` is still infinity, no path exists.

## Complexity
*   **Time Complexity**: O(V + E) where V is vertices, E is edges.
*   **Space Complexity**: O(V + E) for adjacency list and arrays.

## Key Insights
*   BFS guarantees shortest path in unweighted graphs.
