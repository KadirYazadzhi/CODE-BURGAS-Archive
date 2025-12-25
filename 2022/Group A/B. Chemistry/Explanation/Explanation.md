# Explanation: Chemistry

## Problem Analysis
Check if a chemical equation (e.g., `CH4 + 2O2 -> CO2 + 2H2O`) is balanced. An equation is balanced if the count of each type of atom is identical on the left and right sides.

## Algorithmic Approach
1.  **Parsing**:
    *   Split the equation by `->` into `left_side` and `right_side`.
    *   Split each side by `+` into individual molecules.
2.  **Atom Counting Function**: For each molecule (e.g., `2H2O` or `A2B3`):
    *   Extract the **coefficient** at the beginning (e.g., the `2` in `2H2O`). If none, coefficient is 1.
    *   Parse the rest of the string:
        *   Find an element (uppercase letter followed by lowercase, if any).
        *   Find the number following it (atom count). If none, count is 1.
        *   Multiply the atom count by the molecule's coefficient.
    *   Store results in a `map<string, int>`.
3.  **Comparison**:
    *   Sum the counts of all atoms for all molecules on the `left_side`.
    *   Do the same for the `right_side`.
    *   Compare the two maps. If they are exactly equal, the answer is "YES".

## Complexity
*   **Time Complexity**: O(L) per equation, where L is the string length. String parsing and map operations are efficient.
*   **Space Complexity**: O(Elements) to store the atom counts.

## Key Insights
*   Use a `std::map<std::string, int>` or `std::unordered_map` to track the counts of different elements (e.g., "H", "O", "C").
*   Correctly handling coefficients that multiply the entire molecule is the most important part.
