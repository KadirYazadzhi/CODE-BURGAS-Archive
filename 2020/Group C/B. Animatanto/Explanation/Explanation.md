# Explanation: Animatanto

## Problem Analysis
Translate simple arithmetic expressions (e.g., `1+2=3`) into a fictional language ("Animatanto") using a provided dictionary for digits and symbols.

## Algorithmic Approach
1.  **Build Dictionary**:
    *   Store the 10 digit words in an array `digits[10]`.
    *   Store the symbols `+`, `-`, and `=` in a map or individual variables.
2.  **Process Expressions**:
    *   For each expression string:
        *   Iterate through each character.
        *   If it's a digit `d`, output `digits[d - '0']`.
        *   If it's `+`, `-`, or `=`, output the corresponding word from the symbol dictionary.
        *   Ensure there is a single space between words and no trailing spaces.
3.  **Output**: Each translated expression on a new line.

## Complexity
*   **Time Complexity**: O(N \cdot L), where L is the expression length.
*   **Space Complexity**: O(1) beyond the dictionary storage.

## Key Insights
*   Simple character-by-character translation is sufficient as the expressions follow a fixed `A+B=C` format.
*   Be careful with the order of words in the symbol dictionary (usually `+`, `-`, then `=`).
