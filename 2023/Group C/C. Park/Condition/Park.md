# Park

## Description
Renovations are starting in the city park, which has the shape of a square with side length $n$. The alleys will be covered with new pavement, benches will be replaced, there will be a new children's playground, new lighting, etc. But the most attractive feature is the construction of a water cascade. The cascade will be rectangular and must have the largest possible area. The sides of the cascade are parallel to the sides of the park. The builders are given a map of the park (see the figure, where $n = 8$), on which there are shaded cells. These cells contain cultural monuments that must not be destroyed. Write a program `park` that finds the maximum area of the cascade without destroying the cultural monuments.

## Input
From the first line of the standard input, a single integer $n$ is entered – the length of the side of the park.
From the next $n$ lines, $n$ zeros and ones are entered on each line, separated by a single space. 1 corresponds to a shaded cell, and 0 – to an empty one.

## Output
On a single line of the standard output, the program should output a single integer – the maximum area of the cascade.

## Constraints
* $1 \le n \le 200$

## Example

### Input

```
8
0 0 1 0 1 0 0 0
0 1 1 0 1 1 0 0
1 1 1 0 0 0 0 1
1 1 0 0 0 0 1 1
0 0 0 0 0 0 0 1
0 0 0 0 0 0 1 1
0 0 1 0 0 0 0 0
0 1 0 1 0 1 0 1
```

### Output

```
15
```

### Explanation
In the given example, the largest possible rectangle is composed of columns numbered from 4th to 6th, rows numbered from 3rd to 7th, and has an area of $3 \times 5$ squares.
