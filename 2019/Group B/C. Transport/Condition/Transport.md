# Transport

## Description
In Burgas, there are $N$ bus stops, numbered from 1 to $N$, between which buses operate. The bus company has published the distances between every 2 adjacent stops, as well as the price $P$ per kilometer. Help the students calculate the lowest travel cost between any 2 stops in the city.

## Input
On the first line of the standard input, the number $N$ of stops is given.
Following are $N \times N$ numbers ($N$ rows and $N$ columns), which specify the distances between every 2 adjacent stops. If the stops are not adjacent, -1 stands in the corresponding place.
On the next line, 2 numbers are given, specifying the numbers of the starting and ending stops.
On the last line of the standard input, the number $P$ is given, specifying the price per kilometer.

## Output
Output the lowest travel cost between the selected stops to the standard output.

## Constraints
* $2 \le N \le 100$

## Example

### Input
```
4
0 0.5 0.2 -1
0.5 0 -1 0.3
0.2 -1 0 0.4
-1 0.3 0.4 0
1 4
0.5
```

### Output
```
0.30
```

### Explanation
The minimum path is $0.2 + 0.4 = 0.6$ km; $0.6 \times 0.5 \text{ (price)} = 0.30$ BGN.
