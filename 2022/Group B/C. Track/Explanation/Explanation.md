# Explanation: Track

## Problem Analysis
Two competitors move on a circular track of length $X$. We need to find the shortest distance between them on the track after they finish their respective training stages.

## Algorithmic Approach
1.  **Calculate Total Displacement**:
    *   For each competitor, sum the distance moved in each stage: $Dist = \sum (v_i \cdot t_i)$.
    *   Clockwise $v > 0$, Counter-clockwise $v < 0$.
2.  **Find Final Positions**:
    *   The final position $P$ on the circular track is `Dist % X`.
    *   **Handling Negatives**: In C++, `-5 % 400` is `-5`. We need it in the range $[0, X-1]$. Use `(Dist % X + X) % X`.
3.  **Calculate Minimum Arc Length**:
    *   The two positions are $P_1$ and $P_2$.
    *   The simple distance is $d = |P_1 - P_2|$.
    *   On a circle, there are two paths between $P_1$ and $P_2$: one of length $d$ and one of length $X - d$.
    *   The answer is `min(d, X - d)`.

## Complexity
*   **Time Complexity**: O(N).
*   **Space Complexity**: O(1).

## Key Insights
*   Final displacement is the sum of (speed * time).
*   Correct modulo handling for negative numbers is crucial for circular track problems.
