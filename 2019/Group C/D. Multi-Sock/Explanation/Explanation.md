# Explanation: Multi-Sock

## Problem Analysis
Mimi starts with $N$ pairs of socks. She wears one new pair every day. Every $P$ days, she receives a new pair, but she can only wear it starting from the next day. How many days can she survive?

## Algorithmic Approach
1.  **Simulation**:
    *   `current_socks = N`
    *   `new_socks_to_be_received = 0`
    *   `day = 0`
    *   While `current_socks > 0`:
        *   `day++`
        *   `current_socks--` (Mimi puts on a pair).
        *   If `day % P == 0`:
            *   `new_socks_to_be_received++`
        *   At the start of the next day, any socks received previously become available.
        *   Wait, the rule says "never wears new socks on the day she receives them".
        *   Correct Logic:
            *   `current_socks = N`
            *   `day = 0`
            *   While `current_socks > 0`:
                *   `day++`
                *   `current_socks--`
                *   Check if a new pair was received on a **previous** day:
                    *   Wait, she receives it *every $P$-th day*.
                    *   If `day % P == 0`:
                        *   The new pair is received but can't be used today. It will be added to `current_socks` for **tomorrow**.
2.  **Updated Simulation**:
    ```cpp
    int current = N, day = 0;
    while (current > 0) {
        day++;
        current--;
        if (day % P == 0) current++;
    }
    ```
    *Testing N=2, P=2:*
    - Day 1: current 2 -> 1.
    - Day 2: current 1 -> 0. `2 % 2 == 0` -> current becomes 1.
    - Day 3: current 1 -> 0. `3 % 2 != 0`.
    - Day 4: current is 0. Stop. Result 3. Correct.

## Complexity
*   **Time Complexity**: O(Days). With $N, P \le 100$, the number of days is small.
*   **Space Complexity**: O(1).

## Key Insights
*   The "cannot wear on the same day" rule means the new sock received on day $P$ is added to the pile *after* Mimi has already picked her socks for day $P$.
*   This is equivalent to `current--` then `if (received) current++`.
