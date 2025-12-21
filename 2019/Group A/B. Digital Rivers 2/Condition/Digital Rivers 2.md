# Digital Rivers 2

## Description
A digital river is a sequence of numbers where each subsequent number is obtained by adding the sum of its digits to the previous number. In such a sequence, the number 123 is followed by 129 ($123 + (1 + 2 + 3) = 129$), which is followed by 141 ($129 + (1 + 2 + 9) = 141$), and so on.

A digital river $K$ starts with the number $K$. For example, digital river 7 is the sequence (7, 14, 19, 29, 40, 44, 52, ...), and digital river 471 is the sequence (471, 483, 498, 519, ...).

Digital rivers can meet. This happens when two digital rivers share the same values. For example, digital river 32 meets digital river 47 at the number 47, and digital river 471 meets digital river 480 at number 519.

Given a number, determine if it can be an intersection point of two or more digital rivers. For example, it can easily be determined that only digital river 20 contains the number 20 (as a starting point) in its sequence.

## Input
The first line of the standard input contains the number $N$ of test cases. 
The next $N$ lines contain the test cases. 
For each test case, the number $R1$ is entered, which starts a digital river (or is the number to be checked). 
*(Note from translator: The condition says "R1 starts the river", but the question asks "Given a number... determine if it can be an intersection". The input R1 is likely the number to check).*

## Output
For each test case, output to the standard output `YES` if the given number can be an intersection point of two or more digital rivers, and `NO` otherwise.

## Constraints
* $1 \le N \le 100$
* $0 < R1 \le 100000$

## Example

### Input
```
3
20
32
47
```

### Output
```
NO
YES
YES
```
