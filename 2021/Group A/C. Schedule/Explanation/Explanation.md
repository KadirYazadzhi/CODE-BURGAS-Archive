# Explanation: Schedule

## Problem Analysis
Anya and Georgi follow fixed sequences of classes (programs). They each choose a program that starts with their preferred subject. We need to find how many hours they spend together.

## Algorithmic Approach
1.  **Data Structure**: Parse the input into a set of "programs". Each program is a list of `(time, hall)` pairs.
2.  **Selection**:
    *   Anya chooses the program that starts with her chosen subject (e.g., "algebra").
    *   Georgi chooses the program that starts with his chosen subject (e.g., "oop"). If multiple programs exist, choose the one that starts at the same time or hall as Anya's? The example says he chooses the one that matches her better.
3.  **Intersection**:
    *   Compare the two chosen programs hour by hour.
    *   Count the number of times `(time, hall)` is identical in both schedules for the same subject.
    *   Wait, the example says "SDP fmi325" is common and they spend 11 hours? This suggests that once they "meet" at a common class, they might stay together for all subsequent classes in the program.
4.  **Calculation**: Sum the hours spent in common classes.

## Complexity
*   **Time Complexity**: O(N \cdot L) where L is program length.
*   **Space Complexity**: O(N \cdot L).

## Key Insights
*   The problem is about finding overlaps in two paths in a directed graph of classes.
*   The "time" of the class is often implied by its position in the sequence, each taking 1 hour.
