# Explanation: Maximum Profit

## Problem Analysis
We have $N$ tasks, each with a `deadline` and a `profit`. We want to maximize total profit. Each task takes 1 unit of time. This is a classic **Job Sequencing Problem with Deadlines**.

## Algorithmic Approach
**Greedy Strategy**:
1.  **Sort**: Sort all tasks in **descending order of profit**. We want to prioritize high-profit tasks.
2.  **Slot Assignment**:
    *   Find the maximum deadline among all tasks to determine the time horizon (or use a disjoint set/array usually sufficient for $N \le 1000$).
    *   Create a `slots` array (boolean) to track if a time slot `t` is occupied.
    *   For each task (in sorted order):
        *   Try to schedule it as late as possible (closest to its deadline).
        *   Iterate backwards from `min(task.deadline, max_deadline)` down to 1.
        *   If we find a free slot `t`:
            *   Book slot `t`.
            *   Add `task.profit` to `total_profit`.
            *   Increment count of tasks done.
            *   Break and move to next task.
3.  **Output**: `total_profit`.

## Complexity
*   **Time Complexity**: O(N^2) in the worst case (searching for slots). With Disjoint Set Union (DSU) optimization, it can be O(N log N).
*   **Space Complexity**: O(N) or O(max_deadline).

## Key Insights
*   Always pick the highest paying job available.
*   Doing a job at the latest possible moment leaves earlier slots free for other jobs with tighter deadlines.
