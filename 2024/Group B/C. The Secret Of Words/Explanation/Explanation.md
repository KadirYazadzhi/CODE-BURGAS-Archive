# Explanation: The Secret Of Words

## Problem Analysis
We are given a long string (up to $10^6$ characters) and need to:
1.  Count how many times the substring "agent" appears.
2.  Output an `ALERT` if the count > 5, otherwise `NO ALERT`.

## Algorithmic Approach
Since the target word "agent" is short and fixed, a simple linear search is efficient.

1.  **Read Input**: Read the entire string.
2.  **Search**:
    *   Use a loop with `string::find("agent", last_pos)`.
    *   Increment a counter each time a match is found.
    *   Update `last_pos` to `found_pos + 5`.
3.  **Output**:
    *   Print the counter value.
    *   Check if `counter > 5` and print the appropriate alert message.

## Complexity
*   **Time Complexity**: O(N), where N is the length of the string. The search traverses the string once.
*   **Space Complexity**: O(N) to store the input string.

## Key Insights
*   For a string of $10^6$ characters, `std::cin >> string` might be slow; `std::getline` or `scanf` could be faster.
*   The problem doesn't specify if the search should be case-sensitive, but in competitive programming, it's usually literal unless stated otherwise.
