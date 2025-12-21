# MARKET

## Description
A large retail chain has a total of $N$ objects (stores), each numbered from 1 to $N$ inclusive for convenience. The chain's managers are often interested in the sum in the cash registers of stores with specific numbers.

The program should work in active mode, meaning it will receive $Q$ number of queries, which can be as follows:
*   **Type A query** - this type of query indicates that the turnover in a given store has changed by the specified number (initially, we assume that the turnover in each store is 0).
*   **Type B query** - this type of query answers the question of what is the sum of the turnover in the cash registers of stores with numbers from $L$ to $R$.

## Input
The first line of the standard input will contain the integers $N$ ($1 \le N \le 100000$) and $Q$ ($1 \le Q \le 300000$) - respectively, the number of objects and the number of queries that will be made.
Each of the next $Q$ lines follows one of two formats:
*   `A P V`
*   `B L R`
The first format indicates a type A query, where $P$ is the store number in which the turnover changes, and the number $V$ ($-100000 \le V \le 100000$) indicates by how much it has changed.
The second format indicates a type B query, which asks for the sum in the cash registers of stores with numbers from $L$ to $R$, inclusive.

## Output
For each type B query, output a single integer on the screen - the value of the requested sum.

## Example

### Input
```
5 15
A 1 30
A 3 50
A 2 50
A 2 87
A 4 5
A 5 85
B 1 5
A 4 15
A 3 25
B 2 4
B 3 5
A 3 30
A 4 25
A 1 30
B 1 2
```

### Output
```
307
232
180
197
```
