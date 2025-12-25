# Explanation: Journey Through Time

## Problem Analysis
We need to find a path from vertex 1 to vertex $N$ in a graph using **Depth-First Search (DFS)**. If a path exists, we must output it as a sequence of vertices.

## Algorithmic Approach
1.  **Graph Representation**: Use an adjacency list.
2.  **DFS Implementation**:
    *   Keep track of `visited` nodes to avoid cycles and redundant work.
    *   Maintain a `path` vector (or use recursion stack) to store the current route.
3.  **Search Process**:
    *   Start DFS from vertex 1.
    *   In the DFS function:
        *   Mark current node as visited.
        *   Add current node to the `path`.
        *   If current node is $N$, we have found the path. Return `true`.
        *   For each neighbor:
            *   If not visited, recursively call DFS for that neighbor.
            *   If the recursive call returns `true`, propagate the success upwards.
        *   If no neighbors lead to $N$, remove the current node from the `path` (backtrack) and return `false`.
4.  **Output**:
    *   If `solve(1)` is true, print "TIME TRAVEL!" and the contents of the path.
    *   Otherwise, print "TIME TRAVEL NOT POSSIBLE!".

## Complexity
*   **Time Complexity**: O(V + E), where V is the number of eras and E is the number of transitions.
*   **Space Complexity**: O(V + E) for the adjacency list and the recursion/visited data.

## Key Insights
*   DFS does not necessarily find the *shortest* path (BFS would do that), but the problem specifically asks for DFS.
*   The "order of input data" constraint means we should process neighbors in the order they were added to the adjacency list.
