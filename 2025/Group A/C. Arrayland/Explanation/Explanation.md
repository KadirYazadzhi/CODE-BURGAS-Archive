# Explanation: Arrayland

## Problem Analysis
We need to find the length of the **longest contiguous subarray** whose elements sum up to a specific target value $S$.

## Algorithmic Approach
A naive solution checking all subarrays would be O(N^2), which is too slow for large inputs. We can use a **Prefix Sum** approach combined with a Hash Map (or simple array if values were small and positive, but here they can be negative).

1.  **Prefix Sums**:
    *   Maintain a `current_sum` variable that accumulates the sum of elements as we iterate through the array.
    *   At any index `i`, `current_sum` represents the sum of the subarray `arr[0...i]`.
2.  **Hash Map Strategy**:
    *   We store the **first occurrence** of every prefix sum in a map: `map<long long, int> first_occurrence`.
    *   Key: The prefix sum value.
    *   Value: The index `i` where this sum was first achieved.
    *   Initialize `first_occurrence[0] = -1` to handle subarrays starting from index 0.
3.  **Finding the Target**:
    *   For each element at index `i`:
        *   Update `current_sum`.
        *   We are looking for a previous index `j` such that `sum(arr[j+1...i]) == S`.
        *   This is equivalent to checking if `current_sum - S` has been seen before.
        *   If `current_sum - S` exists in the map at index `prev_index`, then the subarray from `prev_index + 1` to `i` has sum $S$.
        *   The length is `i - prev_index`. Update `max_len` if this is the longest found so far.
        *   **Important**: Only add `current_sum` to the map if it's *not* already present. This ensures we keep the leftmost index for maximum length.

## Complexity
*   **Time Complexity**: O(N) using a Hash Map (average case) or O(N log N) using a balanced BST map (worst case).
*   **Space Complexity**: O(N) to store the map of prefix sums.

## Key Insights
*   The problem allows negative numbers, so the sliding window technique (two pointers) is not applicable (sum is not monotonic). Prefix sums with a map is the standard optimal solution.
