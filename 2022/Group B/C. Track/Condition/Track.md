# Track

## Description
A new circular race track with a length of $X$ meters has been built. The facility allows two competitors to train on it simultaneously. The training includes several stages, consisting of consecutive sections, along which the two competitors move at different speeds. At the beginning of the training, participants receive a plan in the form of the following table:

| No. | First Competitor Speed (m/min) | Time (min.) | Second Competitor Speed (m/min) | Time (min.) |
|-----|--------------------------------|-------------|---------------------------------|-------------|
| 1   | -600                           | 15          | 200                             | 13          |
| 2   | 700                            | 13          | -250                            | 33          |
| 3   | -500                           | 11          | 150                             | 21          |

Each row contains speeds (meters per minute) and times, given in minutes, that competitors must maintain during the respective stage of training. Write a program that determines the minimum distance (measured along the track) between the two competitors at the end of the training, if they start simultaneously from the same point on the track and do not stop for rest.

## Input
From the first line of the standard input, two integers $X$ and $N$ are entered – the length of the track in meters and the number of rows in the plan that the competitors received at the beginning of the training.
Each of the next $N$ lines contains four integers - $v1, t1, v2, t2$, where $v1$ is the speed of the first competitor, and $t1$ is the time during which they must maintain this speed; $v2$ is the speed of the second competitor, and $t2$ is the time during which they must maintain this speed.

## Output
On a single line of the standard output, the program should output one integer – the distance, measured along the track in meters, between the points where the two competitors finish their training.

## Constraints
* $1 \le N \le 20$
* $100 \le X \le 1000$
* $0 < t1, t2 < 60$
* $-1000 \le v1, v2 \le 1000$
* If movement speed is $> 0$, movement is clockwise.
* If movement speed is $< 0$, movement is counter-clockwise.

## Example

### Input 1
```
400 2
800 1 800 1
800 10 801 10
```

### Output 1
```
10
```

### Input 2
```
950 3
-600 15 200 13
700 13 -250 33
-550 11 150 21
```

### Output 2
```
350
```
