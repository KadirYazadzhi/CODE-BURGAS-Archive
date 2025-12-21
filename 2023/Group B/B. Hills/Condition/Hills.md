# Hills

## Description
Once upon a time, there was a traveler named Stoyan who set off on a journey through a land full of mountains and valleys. While traveling, he came across a long and winding path with hills and valleys that rose and fell.

As Stoyan walked along this path, he wondered how he could determine the maximum sum of a contiguous subsequence of numbers formed by the height values of the hills he saw during his journey. He knew that he could only move forward and that he had to make the best decision at each step to ensure he ended up with the maximum possible sum.

Stoyan started by considering the height of the first hill as a possible starting point for his subsequence of numbers. Then he considered the next number and calculated the maximum sum that could be obtained by including this number in his subsequence of numbers or by starting a new subsequence of numbers from this number.

Stoyan continued to make decisions in this way, considering whether to add the height of the current hill to the existing subsequence or to start a new subsequence from this number, until he reached the end of his path. At each step, he updated the maximum sum he had found so far.

At the end of his journey, Stoyan obtained the maximum sum of adjacent hill heights. He felt great satisfaction in having solved this problem and continued his journey with newfound confidence and determination.

Write a computer program that implements Stoyan's algorithm.

## Input
On a single line of the standard input, a sequence of integers is entered, separated by spaces, corresponding to the heights of the hills on Stoyan's path.

## Output
On a single line of the standard output, the program should output the maximum sum of adjacent hill heights.

## Example

### Input
```
5 -8 2 3 4 -6 -5 6 -4
```

### Output
```
9
```
