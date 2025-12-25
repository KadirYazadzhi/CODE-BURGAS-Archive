# PRESENTS

## Description
The students from "Dolphin" school decided to have a party with presents. For this purpose, each student had to buy up to 3 presents for their classmates. Each present costs 3 leva.
The class teacher prepared a list - which student bought presents for which other students. To avoid dissatisfaction, the teacher wants to make sure that every student receives at least 2 presents.

## Input
The first line contains $N$, the number of students.
Each of the following $N$ lines contains 3 numbers: $A_i, B_i, C_i$, which correspond to the numbers of the students for whom student $i$ buys presents. Zero means one less present.

## Output
The standard output should contain 1 line: the total sum of purchased presents, followed by the numbers of students in ascending order who will not receive 2 presents. The numbers are separated by spaces.

## Constraints
$N \le 100$

## Example

### Input
```
5
2 3 4
3 4 5
2 5 0
0 0 0
0 0 0
```

### Output
```
24 1
```
