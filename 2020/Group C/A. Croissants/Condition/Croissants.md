# Croissants

## Description
Gosho is a big fan of croissants. More than croissants, however, Gosho loves mathematics. For this very reason, he has a challenge for you and invites you to play in the Croissant Games.

The rules of the Games are as follows:
*   The game is played by $N$ participants.
*   Initially, two integers are given - $X$ and $Y$, where $X \le Y$.
*   Each participant must choose a number within this interval. The goal is for the chosen number to be such that the remainder when divided by the number of participants is as large as possible, and the number is the largest of all numbers spoken during the game.

The game sounds easy at first glance, but the catch is that each participant must say their number super fast, and then the one who achieved the largest remainder receives the grand prize - as many croissants as the remainder! Gosho, although a good mathematician, is not perfect at this game. That's why he commissions you to make a program that will help him win always! You accept this task in exchange for, of course, a solid payment in croissants.

## Input
The first line of the standard input contains the number $T$ of test cases. Each test consists of a series of lines.
*   The first line will contain the number $N$ – this number indicates how many participants there are in the game. The number will be in the interval $[1; 10]$.
*   The second line contains an integer $X$ and an integer $Y$, guaranteeing that $X \le Y$, and $X$ and $Y$ will be in the interval $[0; 100]$.

## Output
For each test, your program must output on a separate line the largest possible number for which the largest possible remainder is obtained.

## Example

### Input
```
3
3
0 5
10
30 50
8
1 6
```

### Output
```
5
49
6
```

### Explanation
*   In the first test, we need to choose the largest number from the interval $[0;5]$ that has the maximum remainder when divided by 3. This number is 5 ($5 \pmod 3 = 2$).
*   In the second test, we need to choose the largest number from the interval $[30;50]$ that has the maximum remainder when divided by 10. This number is 49 ($49 \pmod {10} = 9$).
*   In the third test, we need to choose the largest number from the interval $[1;6]$ that has the maximum remainder when divided by 8. This number is 6 ($6 \pmod 8 = 6$).
