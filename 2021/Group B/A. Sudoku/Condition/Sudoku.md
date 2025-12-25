# SUDOKU

## Description
Ivancho loved solving Sudoku puzzles.
Sudoku is played on a grid consisting of 9 x 9 spaces distributed into 9 rows (horizontal) and 9 columns (vertical) grouped into 3 x 3 squares.
Each row, column, and square (9 spaces each) must be filled with numbers from 1 to 9 without repeating any numbers in a row, column, or square.
At the beginning of the game, some cells on the grid are pre-filled with digits. The goal is to fill all empty squares with digits from 1 to 9.
Each row, each column, and each of the small 3x3 squares must contain all digits from 1 to 9 after completion. Furthermore, each digit can appear only once in a given row, column, or square.
To make it more interesting, Ivancho decided to replace the digits in the game with letters as follows: 1 = A, 2 = B, 3 = C, 4 = D, 5 = E, 6 = F, 7 = G, 8 = H, 9 = I, and the empty fields at the beginning of the game with a dot symbol.

## Input
The first line of the standard input contains the number of games ($N$).
The next $N$ lines each contain exactly 81 symbols concatenated together, corresponding to the cells of the Sudoku matrix (9x9) and representing the initial state of the game.

## Output
Output $N$ lines for the solutions of the Sudoku games.

## Example

### Input
```
1
EB...F.........G.AC...........D..H..F......E...........DAH.........C..B...HG.....
```

### Output
```
EBGCAFDHIHIFEDBGCACADIHGEFBAGBDECHIFFHIBGACEDDECFIHBAGIDAHBEFGCGFEACDIBHBCHGFIADE
```
