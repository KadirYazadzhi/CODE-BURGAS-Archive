# STARGAZER

## Description
Many years ago, in a distant kingdom, lived a famous stargazer who knew an infallible system for predicting the future. With the help of a complex apparatus, he projected the starry sky onto a wall. Then he pointed to one of the stars on the resulting map and called it "point X". Finally, he checked whether the dark and light forces were in balance with respect to the chosen point (if they were, it meant everything would be fine).

The check consisted of the following: first, the stargazer chose two of the stars on the map (one for the light force and one for the dark). If the stars and point X lie on a straight line and if X is exactly in the middle between the two stars, then the balance is maintained. After that, he chose a new pair of stars and performed the above check again, and so on, until he had paired up all the remaining glowing points on the wall.

If in the process it turned out that there was at least one pair of stars for which the rules for maintaining balance did not apply, it meant that the light and dark forces were in conflict - a sure sign of bad luck.

Nowadays, a team of British scientists is trying to decipher what mystical sciences the system of the famous stargazer was based on. They have many star maps from the period he lived, but they have no idea on what principle he chose point X and the pairs of stars for checking.

Help them by writing a program that, given a star map, outputs the coordinates of X or "BAD LUCK" if there is no such point.

## Input
The first line contains the number $N$ - the number of stars on the map.
The next $N$ lines contain pairs of integers $x$ and $y$, separated by a space - the coordinates of each star.

## Output
If there is a point X, its coordinates ($x$ and $y$), separated by a space, are output.
If there is no point X, the message "BAD LUCK" is output.

## Constraints
* $0 < N \le 10000$ = Number of stars on the map
* $-10000000 \le x, y \le 10000000$ = Integer coordinates of the stars

## Example

### Input 1
```
9
1 8
3 4
6 6
6 0
3 -6
2 1
1 -2
-2 -4
-2 2
```

### Output 1
```
2 1
```

### Input 2
```
3
1 1
2 2
3 1
```

### Output 2
```
BAD LUCK
```
