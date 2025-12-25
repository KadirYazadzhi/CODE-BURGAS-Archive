# Explanation: Spelling

## Problem Analysis
We need to implement a spell-checker that finds the closest word in a dictionary to a misspelled word using the minimum number of edits. The allowed distance is $\le 3$.

## Algorithmic Approach
The **Levenshtein Distance** (Edit Distance) algorithm is the standard way to measure string similarity.

1.  **Levenshtein Distance DP**:
    *   `dp[i][j]` is the edit distance between the prefix `s1[0...i-1]` and `s2[0...j-1]`.
    *   If `s1[i-1] == s2[j-1]`: `dp[i][j] = dp[i-1][j-1]` (no edit needed).
    *   Otherwise: `dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])` (representing delete, insert, substitute).
2.  **Dictionary Search**:
    *   Iterate through each word in the dictionary.
    *   Calculate its edit distance to the misspelled word.
    *   Keep track of the word with the minimum distance found so far.
3.  **Validation**:
    *   If the minimum distance is $\le 3$, output the corresponding word.
    *   Otherwise, output `WORD NOT FOUND`.

## Complexity
*   **Time Complexity**: O(N \cdot L_1 \cdot L_2) where N is the number of dictionary words and L are the word lengths.
*   **Space Complexity**: O(L_1 \cdot L_2) for the DP table.

## Key Insights
*   The edit distance calculation is efficient for short words (standard dictionary words).
*   If multiple words have the same minimum distance, the problem doesn't specify which to pick, but usually the first one found or the first alphabetically is expected.
