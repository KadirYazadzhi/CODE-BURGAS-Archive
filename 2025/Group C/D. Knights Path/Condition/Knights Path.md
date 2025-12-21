# Knights Path

## Description
Given an $N \times N$ chessboard. A knight starts from a given position $(X,Y)$ and must traverse the board, visiting each square exactly once. If such a path exists, the program must find and output the knight's movement. The knight traverses the entire board, following the rules of chess movement.

## Input
On the first line, an integer $N$ is entered for the size of the chessboard.
On the second line, two integers $X$ and $Y$ are entered for the starting position from which the knight begins.

## Output
The positions through which the knight passes are output, represented as a list of coordinates $X$ and $Y$, separated by a space, with each position output on a new line. If no solution exists, the program outputs `NO SOLUTION`.

## Example

### Input
```
5
0 0
```

### Output
```
0 0
2 1
4 2
3 4
1 3
0 1
2 2
3 0
1 1
0 3
2 4
4 3
3 1
1 0
0 2
1 4
3 3
4 1
2 0
1 2
0 4
2 3
4 4
3 2
4 0
```
