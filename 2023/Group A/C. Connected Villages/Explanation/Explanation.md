# Explanation: Connected Villages

## Problem Analysis
The goal is to connect all $N$ villages using the minimum total road length. This is a classic **Minimum Spanning Tree (MST)** problem.

## Algorithmic Approach
We can use either **Kruskal's Algorithm** or **Prim's Algorithm**. Kruskal's is often easier to implement for edge lists.

1.  **Kruskal's Steps**:
    *   Store all roads in an edge list.
    *   **Sort** all roads in ascending order based on their weight $W$.
    *   Use a **Disjoint Set Union (DSU)** data structure to track connected components of villages.
    *   Iterate through the sorted roads:
        *   If the two villages $U$ and $V$ of a road are not in the same component (i.e., `find(U) != find(V)`):
            *   Add the road to the MST.
            *   **Union** the components of $U$ and $V$.
            *   Output the edge `U V`.
2.  **Termination**: Stop once we have added $N-1$ edges or checked all roads.

## Complexity
*   **Time Complexity**: O(E log E) for sorting, or O(E log V) if we consider the DSU operations.
*   **Space Complexity**: O(V + E) for the edge list and DSU arrays.

## Key Insights
*   A Minimum Spanning Tree connects all vertices with no cycles and minimum total weight.
*   The DSU ensures that we never add an edge that creates a cycle.
