# Ants

## Description
The ants Anti and Panti were nominated as scouts for the Antcity team participating in the annual ant Olympics for grain collecting. They decided to divide the work of searching farmer Bay Spiridon's garden, consisting of $N$ rows, row by row as follows: they start searching from two opposite directions until they meet in the middle of the row. Very soon, Anti and Panti discovered that in many rows, the grains of wheat, oats, barley, and other crops were symmetrically arranged relative to the center by the careful Bay Spiridon, and decided to search only half the rows. Unfortunately, however, Bay Spiridon's careless son mixed up the positions of the grains in some rows, and they are almost symmetric but differ in one position. Since the field is located near a pine forest, the rows in the field are not of equal length.

Write a program to help Anti and Panti determine if a given row is symmetric or not. If it is symmetric, output 1, if it is not symmetric – 0.

## Input
The first line of the standard input contains the number of rows $N$.
The next $N$ lines contain the rows from the field (as strings).

## Output
On $N$ lines in the standard output, print 1 or 0 depending on the corresponding row.

## Example

### Input
```
3
abcba
abccba
abcd
```

### Output
```
1
1
0
```
