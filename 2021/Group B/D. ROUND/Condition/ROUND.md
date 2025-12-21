# ROUND

## Description
Gosho got lost in an $N \times N$ square matrix consisting of non-negative integers. A Wizard appeared before Gosho and told him that he would be able to escape the square matrix only if he could find a path such that the product of the elements he passed through is a number that is as "round" as possible, meaning it has the fewest possible trailing zeros. Gosho starts his movement in the matrix from the top-left corner. At each step, he can only go down or right. His path must always end in the bottom-right corner.

## Input
The first line contains an integer $N$ ($2 \le N \le 1000$).
The next $N$ lines contain the elements of the matrix, separated by a single space, each being a positive integer not greater than $10^9$.

## Output
On the first line, output the number of trailing zeros of the number obtained with the fewest possible trailing zeros at the end.

## Example

### Input 1

```
4
1 1 9 9
3 4 7 3
7 9 1 7
1 7 1 5
```

### Output 1

```
0
```

### Input 2

```
3
4 10 5
10 9 4
6 5 3
```

### Output 2

```
1
```

### Explanation
In the first example, there is a path where the product has no trailing zeros in its representation. Such a path can be achieved with the sequence: down, down, down, right, right, right. The resulting number is: $1 \times 3 \times 7 \times 1 \times 7 \times 1 \times 5 = 735$.
