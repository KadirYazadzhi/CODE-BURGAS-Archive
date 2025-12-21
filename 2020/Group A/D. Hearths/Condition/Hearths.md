# Hearths

## Description
The year is 2323, and the person is Gosho! Although everything in the world is now high-tech, our Gosho follows a deep family tradition, dating back to time immemorial, and takes care of his forest.

Unfortunately, in 2323, human activity has almost destroyed the Earth's climate, and Gosho's forest is one of the few surviving places with rich vegetation. But, unfortunately, his forest is threatened by forest fires, and it's your task to help protect it!

Thanks to high technology, you have the opportunity to monitor the forest in real-time via satellite. This satellite has a temperature sensor and can give you information on a map for every square meter of the forest, indicating whether there is a fire or not. Your goal is to locate all hearths (fire outbreaks) and provide information about their coordinates so that firefighting drones can take care of these fires.

The forest map will be provided in the form of a table of zeros and ones. If there is a 1 in a given place, you will know that there is a fire there; if there is a 0, there is no danger. A hearth is formed by a group of ones that are connected together horizontally, vertically, or diagonally. To identify a given hearth, you need to provide the coordinates of its top-left segment.

## Input
The first line of the standard input contains the number $T$ of test cases. Each test consists of a series of lines.
The first of them contains two integers - the number of rows $R$ and the number of columns $C$ of the map.
Each of the next $R$ lines contains a sequence of $C$ integers (0 or 1), separated by a space.

## Output
For each test, your program should output on a separate line the number of hearths found, followed by the coordinates of their top-left segment (row, column).

## Constraints
$R, C$ - integer in the interval $[1; 100]$

## Example

### Input
```
2
3 3
0 0 0
1 0 1
0 0 0
4 4
0 0 1 0
1 0 1 0
1 0 1 1
0 0 0 0
```

### Output
```
1 0
1 2
0 2
1 0
```
