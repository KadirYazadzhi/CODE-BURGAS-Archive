# Explanation: Book

## Problem Analysis
Given the total number of digits $D$ used to number the pages of a book starting from 1, find the total number of pages $P$.

## Algorithmic Approach
1.  **Iterative Range Subtraction**:
    *   Pages 1–9: Each uses 1 digit. Total 9 digits.
    *   Pages 10–99: Each uses 2 digits. Total 180 digits ($90 \times 2$).
    *   Pages 100–999: Each uses 3 digits. Total 2700 digits ($900 \times 3$).
    *   Pages 1000–9999: Each uses 4 digits. Total 36000 digits ($9000 \times 4$).
2.  **Logic**:
    *   Determine how many full ranges fit into $D$.
    *   For example, if $D = 195$:
        *   $195 - 9 = 186$ (9 pages accounted for).
        *   $186 - 180 = 6$ (90 more pages accounted for).
        *   Remaining 6 digits used for 3-digit pages: $6 / 3 = 2$ pages.
        *   Total pages: $9 + 90 + 2 = 101$.
3.  **General Formula**: For a range of numbers with $k$ digits (from $10^{k-1}$ to $10^k - 1$), there are $9 \times 10^{k-1}$ numbers, using $k \times 9 \times 10^{k-1}$ digits.
4.  **Result**: Sum the counts of pages from each completed range and the partial final range.

## Complexity
*   **Time Complexity**: O(log_{10} P), very fast.
*   **Space Complexity**: O(1).

## Key Insights
*   The number of digits grows logarithmically with the number of pages.
*   Each range (1-digit, 2-digit, etc.) must be processed sequentially.
