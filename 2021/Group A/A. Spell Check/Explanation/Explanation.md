# Explanation: Spell Check

## Problem Analysis
Calculate the edit distance between pairs of words. An edit is defined as insertion, deletion, or substitution of a character.

## Algorithmic Approach
This is the standard **Levenshtein Distance** problem.

1.  **Dynamic Programming**:
    *   Create a 2D array `dp[L1+1][L2+1]`.
    *   `dp[i][0] = i` (deleting all characters of word1).
    *   `dp[0][j] = j` (inserting all characters of word2).
    *   For each pair of characters:
        *   If `word1[i-1] == word2[j-1]`, then `dp[i][j] = dp[i-1][j-1]`.
        *   Otherwise, `dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})`.
2.  **Output**: For each pair, print `dp[L1][L2]`.

## Complexity
*   **Time Complexity**: O(L1 \cdot L2) per pair.
*   **Space Complexity**: O(L1 \cdot L2) or O(min(L1, L2)) with space optimization.

## Key Insights
*   The distance measures how many atomic changes are needed to transform one string into another.
*   Edit distance is a fundamental metric in natural language processing.
