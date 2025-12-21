# Drone

## Description
A drone pilot encountered a street with buildings, which is a straight line and on it there are $N$ buildings of different heights, numbered from 1 to $N$. The buildings are adjacent to each other and have unit width and length. Standing at the beginning of the street, the pilot sees only some of the buildings. Others remain hidden because there are taller buildings in front of them. The pilot controls a drone with unit height and width and length $L$. The drone can hide from the pilot's view, but cannot leave the street. Write a program that outputs in ascending order the numbers of the buildings visible to the pilot, behind which the drone can hide.

## Input
On the first line of the standard input, two integers $L$ and $N$ are written – the length of the drone and the number of buildings, separated by a single space.
On the second line, $N$ different integers $H$ are written - the heights of the buildings. The numbers are separated by a single space.

## Output
On a single line of the standard output, the program should output in ascending order (from smallest to largest) the numbers of the buildings visible to the pilot, behind which the drone can hide. If there are no such buildings, output "NO".

## Constraints
* $1 \le L < N \le 100$
* $1 \le H \le 1000$

## Example

### Input
```
3 8
5 1 2 3 8 4 7 6
```

### Output
```
1
5
```
