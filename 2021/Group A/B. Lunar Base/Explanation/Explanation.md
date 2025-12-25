# Explanation: Lunar Base

## Problem Analysis
We need to transform a terrain profile $A$ into a flat base at depth $D$. We can dig (accumulate material) or build (consume material). We can also skip a contiguous segment of $X$ meters using one `MOVE` command. The goal is to maximize the final accumulated material.

## Algorithmic Approach
1.  **Analyze Segments**: For each 100m segment $i$ with height $A_i$:
    *   The material change needed to reach depth $D$ is $M_i = A_i - D$.
    *   If $M_i > 0$, we must `DIG` $M_i$ units.
    *   If $M_i < 0$, we must `BUILD` $|M_i|$ units.
2.  **Move Command Strategy**:
    *   The `MOVE X` command allows us to skip $k$ segments ($X = 100 \times k$).
    *   Since we want to maximize material, we should use `MOVE` to skip the segments that would require the most `BUILDING` (highest consumption).
    *   Since we can only use `MOVE` once, we are looking for a **contiguous subarray** of $M_i$ that, when removed, maximizes the remaining sum while maintaining the constraint that the prefix sum of material is always non-negative.
3.  **Constraint Handling**: The drone can only `BUILD` if it has accumulated enough material from previous `DIG` commands.
4.  **Greedy/Sliding Window**:
    *   Test all possible `MOVE` positions and lengths.
    *   For each configuration, verify if the "no negative material at any point" rule is satisfied.
    *   Pick the one with max total material, then max length.

## Complexity
*   **Time Complexity**: O(N^2) naive, but potentially O(N) using two pointers or prefix sums depending on the specific constraints of the "at most one MOVE" rule.
*   **Space Complexity**: O(N).

## Key Insights
*   The `MOVE` command is essentially a "get out of jail free" card for a sequence of expensive building operations.
