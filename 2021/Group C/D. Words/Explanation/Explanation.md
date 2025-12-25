# Explanation: Words

## Problem Analysis
Given $N$ words, find:
1.  The word with the fewest lowercase letters.
2.  The word with the most uppercase letters.

## Algorithmic Approach
1.  **Initialization**:
    *   `min_lower_count = infinity`.
    *   `max_upper_count = -1`.
    *   Variables to store the result words.
2.  **Iteration**: For each word $W$:
    *   Count lowercase letters `cnt_low`.
    *   Count uppercase letters `cnt_up`.
    *   If `cnt_low < min_lower_count`:
        *   `min_lower_count = cnt_low`.
        *   `word_with_fewest_low = W`.
    *   If `cnt_up > max_upper_count`:
        *   `max_upper_count = cnt_up`.
        *   `word_with_most_up = W`.
3.  **Output**: Print the two result words on separate lines.

## Complexity
*   **Time Complexity**: O(N \cdot L), where L is the average word length.
*   **Space Complexity**: O(L) to store the current word.

## Key Insights
*   In C++, use `islower(c)` and `isupper(c)` from the `<cctype>` header to check character casing.
*   Handle ties according to common competitive programming rules (usually the first one encountered) unless otherwise specified.
