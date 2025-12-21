# Chess Rook

## Description
Chess is a board game played on an 8x8 square board. Each cell is identified by a unique pair of symbols (letter, number), where the letter (from "a" to "h") corresponds to the horizontal position, and the number (from "1" to "8") - the vertical position. Thus, the cell in the bottom-left corner has coordinates a1, and the cell in the top-right corner - h8.

A rook is a chess piece that can move an unlimited number of squares horizontally or vertically in each turn, without leaving the board.

Write a program that calculates the length of the path in squares that a rook travels during a game. The path is given as a sequence of coordinates corresponding to each move. The first cell in the path is the initial position of the rook.

## Input
The first line of the input contains the number $N$ - the number of paths for which the length needs to be calculated. Each of the following $N$ lines describes a path of cells through which the rook passes. Each cell is defined by a pair of symbols (letter, number), and there are spaces between the pairs.

## Output
For each path from the input, on a separate line, the corresponding length should be output, in number of squares.

## Example

### Input
```
2
b3 c3
a1 a8 h8 h1 a1
```

### Output
```
1
28
```
