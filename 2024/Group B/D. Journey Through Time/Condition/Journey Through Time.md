# Journey Through Time

## Description
You are a time traveler and have a machine that allows you to move through different eras. Each era is represented as a vertex in a graph, and the transitions between eras are edges in the graph. Your task is to find the path from the starting era to the ending era using the depth-first search algorithm.

## Input
The first line of the input contains two integers $N$ and $M$ - the number of eras and transitions between them.
The next $M$ lines contain two numbers - the indices of two eras between which there is a transition.
Eras are numbered from 1 to $N$. The starting era is always number 1, and the ending era is number $N$.

## Output
If a path exists from the starting to the ending era, output: `TIME TRAVEL!` and then output the path as a sequence of era numbers.
If no such path exists, output: `TIME TRAVEL NOT POSSIBLE!`.
If there are several such paths, only one of them is output, which is according to the order of input data.

## Constraints
* $1 \le N, M \le 1000$

## Example

### Input
```
5 4
1 2
2 3
3 4
4 5
```

### Output
```
TIME TRAVEL!
1 2 3 4 5
```
