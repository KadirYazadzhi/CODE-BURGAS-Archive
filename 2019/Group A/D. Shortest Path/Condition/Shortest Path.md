# Shortest Path

## Description
A list of cities is given. Each direct connection between two cities has its own transportation cost. Find the path with the minimum transportation costs between two cities. The maximum sum of transportation costs between two cities is 200,000. The city name is a string with a maximum length of 10 characters, containing the characters `[a ... z]`.

## Input
The first line of the standard input contains the number $S$ of test cases.
The second line of the standard input contains the number $N$ of cities.
The following lines describe the cities:
* A line with the city name `NAME`;
* A line with the number $P$ of neighboring cities;
* $P$ lines, each containing 2 values: the index of the connected city `NR` and the transportation cost `COST`.
The next line contains the number $R$ of paths to find.
The following $R$ lines contain a pair of city names `NAME1 NAME2`, separated by a space.

## Output
The program must output $R$ lines, each containing the minimum transportation cost between the cities `NAME1` and `NAME2`.

## Constraints
* $1 \le S \le 10$
* $1 \le N \le 10000$
* $1 \le R \le 100$

## Example

### Input
```
1
4
burgas
2
2 1
3 3
varna
3
1 1
3 1
4 4
plovdiv
3
1 3
2 1
4 1
sofia
2
2 4
3 1
2
burgas sofia
varna sofia
```

### Output
```
3
2
```
