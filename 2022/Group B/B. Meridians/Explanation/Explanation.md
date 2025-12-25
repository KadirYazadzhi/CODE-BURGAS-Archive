# Explanation: Meridians

## Problem Analysis
Perform addition or subtraction on two angles given in degrees, minutes, and seconds. Then, find half of the result.

## Algorithmic Approach
1.  **Normalization to Seconds**:
    *   Total Seconds $S = (degrees \times 3600) + (minutes \times 60) + seconds$.
    *   Convert both angles $\alpha$ and $\beta$ to `total_seconds1` and `total_seconds2`.
2.  **Arithmetic**:
    *   If sign is `+`: `result_seconds = total_seconds1 + total_seconds2`.
    *   If sign is `-`: `result_seconds = total_seconds1 - total_seconds2`.
3.  **Halving**:
    *   `half_seconds = result_seconds / 2` (integer division).
4.  **Conversion Back**:
    *   `res_deg = half_seconds / 3600`.
    *   `remainder = half_seconds % 3600`.
    *   `res_min = remainder / 60`.
    *   `res_sec = remainder % 60`.

## Complexity
*   **Time Complexity**: O(1).
*   **Space Complexity**: O(1).

## Key Insights
*   Converting to the smallest unit (seconds) simplifies the math significantly compared to carrying over minutes and degrees manually.
*   Always handle the constraints ($\alpha > \beta$ for subtraction) and the limit of $360^\circ$.
