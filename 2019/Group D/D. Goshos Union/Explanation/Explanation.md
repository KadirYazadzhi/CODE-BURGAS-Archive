# Explanation: Goshos Union

## Problem Analysis
Calculate the area of a circle and the remaining area of a rectangular flag given its width $W$ and specific ratios.

## Algorithmic Approach
1.  **Calculate Dimensions**:
    *   Given Width $W$.
    *   Height $H$: From ratio $W:H = 10:6 \Rightarrow H = W \times 0.6$.
    *   Radius $R$: From ratio $W:R = 5:1 \Rightarrow R = W / 5.0$.
2.  **Calculate Areas**:
    *   Total Area $A_{total} = W \times H$.
    *   Circle Area $A_{circle} = \pi \times R^2$.
    *   Blue Area $A_{blue} = A_{total} - A_{circle}$.
3.  **Constants and Formatting**:
    *   Use `M_PI` for $\pi$.
    *   Format output with `fixed` and `setprecision(2)`.

## Complexity
*   **Time Complexity**: O(1).
*   **Space Complexity**: O(1).

## Key Insights
*   The problem is a straightforward application of geometric formulas.
*   Precise calculation and rounding to two decimal places are the main implementation details.
