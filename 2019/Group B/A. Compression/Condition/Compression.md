# Compression

## Description
For Christmas, Ivancho's parents bought him a new laptop with a large hard drive, but by Easter, it was already full of games and movies. Since they wouldn't agree to buy him a new one so soon, he decided to free up some space by compressing his files. The algorithm he decided to use transforms every natural number $a$ into another number $a_1$, consisting of only a single digit. Compression performs a series of steps, each of which involves replacing the number with the sum of its digits. After a finite number of operations, the single-digit number $a_1$ is reached.

For example, if the number 98 is given, after one compression step, the number $9 + 8 = 17$ will be obtained. After one more compression step, we will get the final result $1 + 7 = 8$.

## Input
The standard input contains the number $a$.

## Output
Output the number $a_1$ to the standard output.

## Example

### Input
```
98
```

### Output
```
8
```
