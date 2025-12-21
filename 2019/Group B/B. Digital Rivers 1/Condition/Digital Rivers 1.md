# Digital Rivers 1

## Description
A digital river is a sequence of numbers where each subsequent number is obtained by adding the sum of its digits to the previous number. In such a sequence, the number 123 is followed by 129 ($123 + (1 + 2 + 3) = 129$), which is followed by 141 ($129 + (1 + 2 + 9) = 141$), and so on.

A digital river $K$ starts with the number $K$. For example, digital river 7 is the sequence (7, 14, 19, 29, 40, 44, 52, ...), and digital river 471 is the sequence (471, 483, 498, 519, ...).

Digital rivers can meet. This happens when two digital rivers share the same values. For example, digital river 32 meets digital river 47 at the number 47, and digital river 471 meets digital river 480 at number 519.

Given two digital rivers that meet. Find and print the number at which the two digital rivers meet.

## Input
The first line of the standard input contains the number $N$ of test cases.
The next $2 \times N$ lines contain the test cases. Each test case consists of two lines as follows:
* The first line specifies the number $R1$, with which the first digital river starts;
* The second line specifies the number $R2$, with which the second digital river starts.

## Output
For each test case, output to the standard output the number at which the two digital rivers meet.

## Constraints
* $1 \le N \le 100$
* $0 < R1 \le 20000000$
* $0 < R2 \le 20000000$

## Example

### Input
```
2
32
47
471
480
```

### Output
```
47
519
```
