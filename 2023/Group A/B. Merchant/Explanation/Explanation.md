# Explanation: Merchant

## Problem Analysis
Georgi wants to maximize profit with a limited backpack capacity $C$. We are given $N$ items, each with a weight $W$ and a value $V$. The problem asks for the maximum profit, formatted to 3 decimal places.

## Algorithmic Approach
The 3 decimal places in the output usually suggest the **Fractional Knapsack Problem**, where you can take parts of items.

1.  **Greedy Strategy**:
    *   Calculate the **value-to-weight ratio** ($V/W$) for each item.
    *   Sort all items in **descending order** based on this ratio.
2.  **Selection**:
    *   Iterate through the sorted items.
    *   If the item's weight fits in the remaining capacity, take the whole item and subtract its weight from the capacity.
    *   If the item's weight is more than the remaining capacity, take a fraction of the item: `(remaining_capacity / item_weight) * item_value`.
    *   Stop once the capacity is zero.
3.  **Formatting**: Output the final sum formatted with `fixed` and `setprecision(3)`.

## Complexity
*   **Time Complexity**: O(N log N) due to sorting.
*   **Space Complexity**: O(N) to store item data.

## Key Insights
*   If the problem were 0/1 Knapsack (where you can only take full items), it would require Dynamic Programming and usually involve integers. The decimal output is a strong hint for the Fractional variant.
