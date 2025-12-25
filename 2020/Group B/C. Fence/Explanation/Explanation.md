# Explanation: Fence

## Problem Analysis
Given $N$ poles at coordinates $(x, y)$, calculate the perimeter of a rectangular fence that surrounds all poles with a 1-meter margin on all sides.

## Algorithmic Approach
1.  **Find Bounding Box**:
    *   Iterate through all poles to find the extreme coordinates: $X_{min}, X_{max}, Y_{min}, Y_{max}$.
2.  **Apply Margin**:
    *   The poles occupy a rectangle of width $W = X_{max} - X_{min}$ and height $H = Y_{max} - Y_{min}$.
    *   Adding a 1-meter margin to all four sides (left, right, top, bottom) increases both width and height by 2 meters.
    *   $W_{fence} = W + 2$
    *   $H_{fence} = H + 2$
3.  **Calculate Perimeter**:
    *   $Perimeter = 2 \cdot (W_{fence} + H_{fence})$.
4.  **Output**: Print the perimeter.

## Complexity
*   **Time Complexity**: O(N).
*   **Space Complexity**: O(1).

## Key Insights
*   The bounding box logic ensures all poles are inside.
*   A 1m margin on "all sides" means the fence is at $X_{min}-1, X_{max}+1, Y_{min}-1, Y_{max}+1$.
