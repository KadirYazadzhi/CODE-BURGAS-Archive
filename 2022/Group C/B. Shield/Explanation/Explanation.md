# Explanation: Shield

## Problem Analysis
Given two triangles with sides $(a_1, b_1, c_1)$ and $(a_2, b_2, c_2)$, find the minimum perimeter of a shield formed by joining them along one shared side.

## Algorithmic Approach
1.  **Shared Side Requirement**: To join two triangles along a side, the chosen side length must exist in both triangles.
2.  **Calculate Perimeters**:
    *   $P_1 = a_1 + b_1 + c_1$
    *   $P_2 = a_2 + b_2 + c_2$
3.  **Maximize Shared Side**:
    *   Find the largest value $L$ such that $L \in \{a_1, b_1, c_1\}$ AND $L \in \{a_2, b_2, c_2\}$.
4.  **Final Perimeter**:
    *   When joined, the shared side becomes internal and is removed from the external perimeter of both triangles.
    *   $P_{shield} = P_1 + P_2 - 2 \cdot L$.
5.  **Output**: The minimum possible $P_{shield}$.

## Complexity
*   **Time Complexity**: O(1).
*   **Space Complexity**: O(1).

## Key Insights
*   To minimize the final perimeter, we must maximize the length of the side that is "hidden" inside the shield.
*   The shared side must have the same length in both triangles for a perfect joint.
