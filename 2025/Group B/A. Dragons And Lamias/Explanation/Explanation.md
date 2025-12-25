# Explanation: Dragons And Lamias

## Problem Analysis
The problem asks us to find the length of the longest consecutive sequence of identical elements ("dragons" or "lamias") in an array. This is a classic "Longest Run" or "Max Consecutive Identical Elements" problem.

## Algorithmic Approach
1.  **Iterate**: Traverse the array from the second element to the end.
2.  **Comparison**: Maintain a `current_run` counter (initialized to 1). Compare the current element `arr[i]` with the previous element `arr[i-1]`.
    *   If `arr[i] == arr[i-1]`: They are the same type. Increment `current_run`.
    *   If `arr[i] != arr[i-1]`: The sequence has broken. Reset `current_run` to 1.
3.  **Track Maximum**: In every step, update a `max_run` variable: `max_run = max(max_run, current_run)`.
4.  **Result**: The value of `max_run` is the answer.

## Complexity
*   **Time Complexity**: O(N), where N is the number of elements. We pass through the array exactly once.
*   **Space Complexity**: O(N) to store the input array (or O(1) if processed on the fly).

## Key Insights
*   Simply keeping track of the current streak and updating the maximum streak is sufficient.
