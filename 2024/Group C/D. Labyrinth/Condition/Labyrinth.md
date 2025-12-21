# Labyrinth

## Description
You are at the beginning of a labyrinth and need to find the exit. The labyrinth is represented as a two-dimensional array, where 0 represents a wall and 1 represents a free path. You can move up, down, left, and right. You cannot pass through walls.

## Input
The first line of the input contains two integers $n$ and $m$ - the number of rows and columns of the labyrinth.
The next $n$ lines contain $m$ numbers - the description of the labyrinth.
The starting position is always in the top-left corner (0, 0), and the exit is in the bottom-right corner ($n-1, m-1$).

## Output
If a path to the exit exists, output the path as a sequence of steps (D = down, R = right, L = left, U = up). If no path to the exit exists, output: `NO SOLUTION`.

## Constraints
* $1 \le n, m \le 100$

## Example

### Input
```
5 5
1 0 1 1 1
1 0 1 0 1
1 1 1 0 1
0 0 0 0 1
1 1 1 1 1
```

### Output
```
DDRRUURRDDDD
```
