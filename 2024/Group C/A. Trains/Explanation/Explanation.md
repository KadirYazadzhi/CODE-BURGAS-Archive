# Explanation: Trains

## Problem Analysis
Two trains move towards each other from stations separated by distance $d$ with speeds $v_1$ and $v_2$. We need to find the meeting time and the total distance traveled by both.

## Algorithmic Approach
1.  **Relative Speed**: Since the trains move towards each other, their relative speed is $V_{rel} = v_1 + v_2$.
2.  **Meeting Time**: The time taken to cover the distance $d$ at speed $V_{rel}$ is $t = d / V_{rel}$.
3.  **Total Distance**: The sum of distances traveled by both trains is $D_{total} = v_1 \cdot t + v_2 \cdot t$, which simplifies to $(v_1 + v_2) \cdot t$. Since $t = d / (v_1 + v_2)$, then $D_{total}$ should theoretically be equal to the initial distance $d$.

## Complexity
*   **Time Complexity**: O(1).
*   **Space Complexity**: O(1).

## Key Insights
*   **Important**: Looking at the provided example ($v_1=100, v_2=150, d=300 \Rightarrow t=1, dist=250$), it appears the time might be calculated using **integer division** (`300 / 250 = 1`), and the total distance is calculated using this truncated time: `(v_1 + v_2) * 1 = 250`. Always check if the competition environment uses floating point or integer arithmetic for such problems.
