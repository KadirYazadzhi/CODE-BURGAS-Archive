# Explanation: Aristocrats

## Problem Analysis
Find the longest chain of mother-child relationships among mice. This is equivalent to finding the maximum depth in a forest of trees.

## Algorithmic Approach
1.  **Graph Representation**:
    *   Represent the family ties as a directed graph where an edge exists from `mother` to `child`.
    *   Each node has at most one incoming edge (one mother).
2.  **Depth Calculation**:
    *   Use **Dynamic Programming with Memoization** or **DFS** to find the depth of each node.
    *   `depth(u) = 1 + max(depth(v))` for all children `v` of `u`.
    *   If a node has no children, `depth(u) = 1`.
3.  **Global Maximum**:
    *   The answer is the maximum depth found among all nodes.

## Complexity
*   **Time Complexity**: O(N), where N is the number of family ties. We visit each relationship once.
*   **Space Complexity**: O(N) to store the graph and the depths.

## Key Insights
*   Mice without mothers are "roots" of the trees.
*   The problem asks for the maximum number of generations, which is the number of nodes in the longest path.
