# Explanation: Sphere

## Problem Analysis
Given the radius $r$ of a sphere, calculate its volume $V$ and surface area $A$.

## Algorithmic Approach
1.  **Formulas**:
    *   Volume $V = \frac{4}{3} \pi r^3$
    *   Surface Area $A = 4 \pi r^2$
2.  **Implementation**:
    *   Use a high-precision value for $\pi$ (e.g., `acos(-1.0)` or `3.1415926535...`).
    *   Calculate $V$ and $A$ using floating-point variables (`double`).
    *   Format the output to 3 decimal places as shown in the example.

## Complexity
*   **Time Complexity**: O(1).
*   **Space Complexity**: O(1).

## Key Insights
*   Be careful with integer division in `4/3`. Use `4.0 / 3.0` to ensure a floating-point result.
*   Standard precision (`double`) is sufficient for this task.
