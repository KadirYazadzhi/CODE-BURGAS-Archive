# Chess Rook

## Description
Chess is a board game played on an 8x8 square board. Each cell is identified by a unique pair of symbols (letter, number), where the letter (from "a" to "h") corresponds to the horizontal position, and the number (from "1" to "8") - the vertical position. Thus, the cell in the bottom-left corner has coordinates a1, and the cell in the top-right corner - h8.

A rook is a chess piece that can move an unlimited number of squares horizontally or vertically in each turn, without leaving the board.

Write a program that, given an initial position of a rook and a sequence of moves on the board, calculates the coordinates of the final position.

Each move is described by a pair of symbols (direction, offset). Direction is one of the letters "U", "R", "D", "L", meaning up, right, down, and left, respectively. Offset is a digit from "1" to "7" and indicates how many squares in the given direction the rook has moved.

## Input
The first line of the input contains the initial position of the rook, in (letter, number) format.
The second line contains the number $N$ - the number of moves of the rook on the board.
The third line contains $N$ pairs of symbols (direction, offset), separated by spaces, describing each move.

## Output
For the given path from the input, output the coordinates of the final cell, in (letter, number) format.

## Example

### Input
```
a1
4
R7 U7 L7 D6
```

### Output
```
a2
```
