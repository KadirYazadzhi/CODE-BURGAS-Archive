# Boring Party

## Description
Gosho ended up at a very boring party. The party was so boring that he started stealing people's straws. He stole several straws, which were somewhat interesting because they were of different colors and different lengths. The straws themselves were not enough to hold Goshko's interest for long, which is why he found a new interesting activity - he wondered if he could make a rectangle with the stolen straws, but this is not such an easy task for him, so you come to the rescue.

The rules for creating a rectangle are as follows:
* Each straw you have has an integer length.
* Straws are joined exactly, i.e., no straw overlaps another.
* Straws can be folded anywhere along their entire length (Wait, the condition says "can be folded anywhere", but the example implies sum of lengths must be even. Usually straws are rigid. Let's re-read carefully: "Сламките могат да се сгъват навсякъде..." - Straws can be bent anywhere. This implies they act as a continuous length. However, the example logic "perimeter 53 / 2 = 26.5 not integer" implies the perimeter must be even. Actually, if straws can be bent anywhere, you can make corners anywhere. But "Straws CANNOT be cut or split". The constraint is likely simply $P_{total}$ must be even, and potentially more logic if folding is limited to integer coordinates, but the text says "can be bent anywhere". The example explanation focuses solely on the perimeter being even. If perimeter is odd, side sum is $P/2$ which is not integer, but side lengths must be formed by integer straws? No, if straws can be bent, the only constraint for a rectangle is $P/2$ must be reachable. Since all inputs are integers, total length is integer. If total length is odd, $P/2$ is X.5, sides cannot be equal? Yes. So simple check: is sum even? Let's stick to the example logic).

## Input
The first line of the standard input contains the number $T$ of test cases. Each test consists of 1 line. The line contains 4 integers:
* $P$ = number of straws with length 1 stolen by Goshko
* $Q$ = number of straws with length 2 stolen by Goshko
* $R$ = number of straws with length 3 stolen by Goshko
* $S$ = number of straws with length 4 stolen by Goshko

## Output
For each test, your program must output on a separate line the message `YES` if Goshko can make a rectangle, or `NO` otherwise.

## Constraints
All input numbers will be in the range $[1; 100]$.

## Example

### Input
```
2
4 4 7 5
3 3 5 5
```

### Output
```
NO
YES
```

### Explanation
In the first test, the perimeter of the resulting figure is 53 ($1 \times 4 + 2 \times 4 + 3 \times 7 + 4 \times 5 = 4+8+21+20$), which means the semi-perimeter would be $53 / 2 = 26.5$, but this is not an integer. Since all participating straws have integer lengths (and presumably sum of two sides must be integer? Or just that total length must be even to be divided into 2 equal sums of W+H), it is impossible to form a rectangle.
In the second test, the perimeter is $1 \times 3 + 2 \times 3 + 3 \times 5 + 4 \times 5 = 3 + 6 + 15 + 20 = 44$. This means the semi-perimeter is 22, which means that in this case, a rectangle can be formed according to the rules.
