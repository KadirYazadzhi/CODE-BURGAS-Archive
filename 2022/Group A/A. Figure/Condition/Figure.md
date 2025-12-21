# Figure

## Description
Mimi has a table consisting of $N$ rows and $M$ columns, where each cell contains either '.' or '#'. She challenged Gosho to find how many "diamond" figures there are. A "diamond" figure is defined as a figure consisting of '#' in every element of its edges, and its interior must consist entirely of '.' and must not be empty. Outside the diamond figure, any symbol can be found. Now, because Gosho is clueless, you have to help him with Mimi's task, because you are his wingman and do not leave a friend in need!

## Input
The first line of the input contains positive integers $N$ and $M$ ($1 \le N, M \le 2000$), respectively the number of rows and columns.
Each of the next $N$ lines contains $M$ symbols.

## Output
Output on a single line the number of found diamonds.

## Example

### Input
```
7 25
................#........
..#......#.....#.#.......
.#.#....#.#.....#.....#..
#...#..#...#........#..#.
.#.#....#.#.....#.#.#.#..
..#......#.....#.#..#....
................#........
```

### Output
```
4
```
