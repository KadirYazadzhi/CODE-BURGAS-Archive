# Mobile Deal

## Description
Gosho is into schemes. One of his new acquisitions is that he managed to negotiate a special contract with "DalaverkaTEL" (SchemeTEL) under which he receives a certain amount of MB of mobile internet every month. But that's not all. If he is thrifty, i.e., uses Wi-Fi from his neighbors through a scheme, he might not use all his available megabytes. Then comes the super scheme! At the end of the month, his unused megabytes accumulate and are carried over. Because Gosho wants his scheme to be solid, he has a special schemer's task for you! The task is to check if after N+1 months, the megabytes are correctly accounted for by the operator.

## Input
The first line of the standard input contains the number $T$ of test cases. Each test consists of a series of lines.
*   The first line will contain the number $X$ – this number indicates how many megabytes he received per month from DalaverkaTEL.
*   The second line contains the number $N$ – the number of months he used the mobile internet.
*   Each of the next $N$ lines contains the number $P_i$ – this number indicates how many megabytes he used in the respective month.

## Output
For each test, your program must output on a separate line the number of megabytes remaining at the end, so that Gosho can compare them with what DalaverkaTEL claims he has left.

## Constraints
*   $X$ - integer in the interval $[1; 100000]$
*   $N$ - integer in the interval $[1; 1000]$
*   $P_i$ - integer in the interval $[1; 50000]$

## Example

### Input
```
2
1000
3
400
150
2500
10000
5
1000
9200
10000
12000
0
```

### Output
```
950
27800
```

### Explanation
In the first test, Gosho receives 1000 MB each of these months.
During the first month, out of a total of 1000 MB, he used 400, and 600 are transferred to the next month.
During the second month, out of 1600 (1000+600) MB, he used 150 and carries over 1450 to the third month.
During the third month, out of a total of 2450, he used even more - 2500. So the transfer for the fourth ($N+1$) month is -50.
Then he receives a new 1000MB, and his final balance is 950MB.

In the second test, Gosho receives 10000MB each of these months.
During the first month, out of a total of 10000MB, he used 1000MB, so the transfer is 9000.
The next month, out of 19000, he used 9200.
During the third month, out of 19800, he used 10000. So he transfers 9800 to the next month.
During the fourth month, out of 19800, he used 12000. So he transfers 7800.
After that, he uses nothing and transfers 17800.
Finally, during the last month, he receives a new 10000MB, and the final balance is 27800.
