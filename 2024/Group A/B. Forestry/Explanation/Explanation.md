# Explanation: Forestry

## Problem Analysis
Pesho needs to plant trees in $N$ areas using a condor. The condor has a capacity $C_{condor}$ and a flight time limit $T_{condor}$. Each area $i$ requires $C_i$ seeds and $T_i$ time to plant. Traveling between areas also takes time. We need to find the **minimum number of recharges** to plant all areas.

## Algorithmic Approach
Given $N \le 20$, this problem can be approached as a variation of the **Vehicle Routing Problem** or a path-finding problem with capacity/time constraints.

1.  **Graph Representation**: Create an adjacency matrix where `dist[a][b]` is the time to fly between area `a` and `b`. Use Floyd-Warshall to find all-pairs shortest paths between areas.
2.  **State Representation**: Since $N$ is small, we can use **Dynamic Programming with Bitmask**.
    *   `dp[mask][current_area]` = `{recharges, remaining_seeds, remaining_time}`.
    *   We want to minimize recharges.
3.  **Transitions**:
    *   From `current_area`, try to fly to any unvisited `next_area`.
    *   Check if the condor has enough `remaining_seeds` ($C_{next}$) and `remaining_time` (flight time + $T_{next}$).
    *   If yes: Move to `next_area`, update `mask`, subtract seeds and time.
    *   If no: The condor must return to the base to "recharge". This increments the recharge count and resets seeds/time.
4.  **Goal**: Find the minimum recharges to reach a state where all bits in the mask are 1.

## Complexity
*   **Time Complexity**: O(2^N * N^2) due to bitmask DP. With $N=20$, $2^{20} \approx 10^6$, which is feasible within 1-2 seconds.
*   **Space Complexity**: O(2^N * N).

## Key Insights
*   The "condor cannot plant partially" rule simplifies things; we either finish an area or we don't.
*   The time limit $T_{condor}$ and capacity $C_{condor}$ are independent constraints that both trigger a recharge.
