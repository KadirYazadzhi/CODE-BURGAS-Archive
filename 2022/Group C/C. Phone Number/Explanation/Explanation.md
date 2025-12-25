# Explanation: Phone Number

## Problem Analysis
Translate a phone number containing letters (e.g., `1-800-COLLECT`) into its digit equivalent using the standard phone keypad mapping.

## Algorithmic Approach
1.  **Mapping Table**:
    *   2: A, B, C
    *   3: D, E, F
    *   4: G, H, I
    *   5: J, K, L
    *   6: M, N, O
    *   7: P, Q, R, S
    *   8: T, U, V
    *   9: W, X, Y, Z
2.  **Processing**:
    *   Iterate through each character of the input string $S$.
    *   If the character is a digit or a hyphen `-`, output it as is.
    *   If it is an uppercase letter, find its corresponding digit from the table and output that digit.
3.  **Output**: The resulting translated string.

## Complexity
*   **Time Complexity**: O(L) where L is the length of the string.
*   **Space Complexity**: O(1) or O(L) depending on whether we print directly or build a new string.

## Key Insights
*   Using a simple `switch` statement or an array of 26 characters makes the translation very easy.
