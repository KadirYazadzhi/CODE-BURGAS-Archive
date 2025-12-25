# Explanation: Net

## Problem Analysis
Two users share a bandwidth. If one is active, speed is $V$. If two are active, speed is $V/2$. We need to find the total download time for each user given their file sizes and the delay in finishing.

## Algorithmic Approach
1.  **Units**: Convert file sizes (MBytes) to KBytes (1 MB = 1024 KB) to match speed units (KB/s).
2.  **Simulation Phases**:
    *   **Phase 1**: Ani downloads alone at speed $V$ for $x$ seconds. (Material $S_{Ani\_1} = V \cdot x$).
    *   **Phase 2**: Mitko starts. Both download at $V/2$ for $T_{overlap}$ seconds until Ani finishes.
        *   $S_{Ani\_2} = (V/2) \cdot T_{overlap}$
        *   $S_{Mitko\_1} = (V/2) \cdot T_{overlap}$
        *   Ani's total size: $S_{Ani\_1} + S_{Ani\_2} = S_{Ani}$.
    *   **Phase 3**: Mitko finishes alone at speed $V$ for 8 seconds.
        *   $S_{Mitko\_2} = V \cdot 8$.
        *   Mitko's total size: $S_{Mitko\_1} + S_{Mitko\_2} = S_{Mitko}$.
3.  **Solving**:
    *   From Mitko's equation: $S_{Mitko\_1} = S_{Mitko} - (V \cdot 8)$.
    *   Calculate $T_{overlap} = S_{Mitko\_1} / (V/2)$.
    *   Calculate $S_{Ani\_2} = (V/2) \cdot T_{overlap}$.
    *   Calculate $S_{Ani\_1} = S_{Ani} - S_{Ani\_2}$.
    *   Calculate $x = S_{Ani\_1} / V$.
4.  **Result**:
    *   Ani's time: $x + T_{overlap}$.
    *   Mitko's time: $T_{overlap} + 8$.

## Complexity
*   **Time Complexity**: O(1).
*   **Space Complexity**: O(1).

## Key Insights
*   Working backward from the fixed 8-second ending phase allows solving for all unknown times.
*   Correct unit conversion (1024 vs 1000) is key.
