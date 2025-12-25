# Explanation: Sequence

## Problem Analysis
Given $N$ numbers where two numbers appear exactly once and all other numbers appear exactly twice. Find the two unique numbers.

## Algorithmic Approach
This is a classic problem solvable using properties of the **XOR** operator.

1.  **Total XOR**: Calculate the XOR sum of all $N$ numbers.
    *   `total_xor = x_1 ^ x_2 ^ ... ^ x_n`.
    *   Since $x \oplus x = 0$, all numbers appearing twice cancel out.
    *   The result is `res = a ^ b`, where `a` and `b` are the two unique numbers.
2.  **Partitioning**:
    *   Since $a 
eq b$, `res` must have at least one bit set (value 1). Find the position of any such bit (e.g., the rightmost set bit using `res & -res`).
    *   Divide all numbers into two groups based on whether they have this bit set or not.
3.  **Finding a and b**:
    *   XOR all numbers in the first group. The result will be `a` (because `b` is in the other group and all other pairs in this group cancel out).
    *   XOR all numbers in the second group. The result will be `b`.
4.  **Output**: Sort `a` and `b` and print them.

## Complexity
*   **Time Complexity**: O(N). We traverse the array twice.
*   **Space Complexity**: O(1) beyond storing the input (if processed in a stream, otherwise O(N)).

## Key Insights
- XORing a number with itself results in 0.
- XORing a number with 0 results in the number itself.
- This technique is very memory-efficient as it doesn't require a hash map.
