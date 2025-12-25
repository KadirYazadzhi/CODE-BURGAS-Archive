# Explanation: Sequence

## Problem Analysis
Given $N$ distinct integers, extract the $M$ smallest ones and output them in the same relative order as they appeared in the original sequence.

## Algorithmic Approach
1.  **Store with Indices**:
    *   Create a list of pairs (or objects): `data[i] = {value: arr[i], index: i}`.
2.  **Find Smallest**:
    *   Sort the list `data` based on the `value`.
    *   Keep only the first $M$ elements of the sorted list.
3.  **Restore Order**:
    *   Sort these $M$ elements based on their original `index`.
4.  **Output**: Print the values of these $M$ elements in a single line.

## Complexity
*   **Time Complexity**: O(N \log N) for the initial sort.
*   **Space Complexity**: O(N).

## Key Insights
*   Sorting twice (once by value, once by index) is a powerful technique for "preserving order while selecting by value" problems.
*   Since all numbers are distinct, the "smallest M" are unique.
