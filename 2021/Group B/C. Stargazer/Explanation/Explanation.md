# Explanation: Stargazer

## Problem Analysis
Find a point $X$ (the center of symmetry) such that for every star at $(x_i, y_i)$, there is another star at $(x_j, y_j)$ where $X = \frac{(x_i + x_j)}{2}$.

## Algorithmic Approach
1.  **Candidate Point**:
    *   The center of symmetry of a set of points must be their **centroid**.
    *   $X_c = \frac{1}{N} \sum x_i$
    *   $Y_c = \frac{1}{N} \sum y_i$
2.  **Verification**:
    *   First, ensure $X_c$ and $Y_c$ are valid (they can be integers or half-integers, e.g., 2.5).
    *   Check if every point $(x_i, y_i)$ has a symmetric counterpart $(x_j, y_j) = (2X_c - x_i, 2Y_c - y_i)$.
    *   Use a `std::set` or a sorted vector for $O(\log N)$ or $O(1)$ lookups.
3.  **Odd vs Even**:
    *   If $N$ is odd, the centroid must be exactly one of the stars.
    *   If $N$ is even, the centroid might be a star or a point in between.
4.  **Output**: If verified, print $X_c$ and $Y_c$. Otherwise, print "BAD LUCK".

## Complexity
*   **Time Complexity**: O(N \log N) due to sorting or set lookups.
*   **Space Complexity**: O(N) to store the stars.

## Key Insights
*   The centroid property is a necessary condition for a center of symmetry, allowing us to find the only possible candidate in $O(N)$ time.
*   Using integers (storing $2X_c$ and $2Y_c$ as sums) avoids floating-point precision issues.
