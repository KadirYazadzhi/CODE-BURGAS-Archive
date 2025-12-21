# Trains

## Description
The trains "Speed Express" and "Linear Locomotive" travel on parallel railway lines. The speed of the trains is calculated using the following expression: $V = (A \cdot x + B) / (C \cdot x + D)$

## Input
Five integers $A, B, C, D$, and $x$ are entered from the standard input. $x$ represents the time in minutes from the start of the journey.

## Output
The speed of the trains in km/h is output to the standard output.
*   If the denominator ($C \cdot x + D$) is zero, the message "ZERO ERROR" should be output.
*   If the result ($V$) is not an integer, the message "NAN ERROR" should be output.

## Constraints
*(Not explicitly stated in the provided content)*

## Example

### Input 1
```
5 10 3 7 4
```

### Output 1
```
2 km/h
```

### Input 2
```
5 10 3 -12 4
```

### Output 2
```
ZERO ERROR
```

### Input 3
```
5 10 3 8 4
```

### Output 3
```
NAN ERROR
```
