# Maximum Profit

## Description
You have $N$ tasks, each with a deadline and a profit. Choose the maximum number of tasks for maximum profit, while respecting the deadlines.

## Input
On the first line of the standard input, a single integer $N$ is entered, corresponding to the number of tasks.
Each of the next $N$ lines contains two integers, respectively: the first for the deadline for completing the task and the second for the profit upon completing the task.

## Output
On the standard output, output a single positive integer corresponding to the maximum profit.

## Example

### Input
```
4
1 100
2 50
2 20
3 10
```

### Output
```
160
```

### Explanation
The most optimal choice is to take the tasks with the highest profit without exceeding the deadlines. In this case, we choose the first, second, and third tasks, which give a total profit of $100 + 50 + 10 = 160$.
