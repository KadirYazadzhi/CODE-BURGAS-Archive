# Multi-Sock

## Description
Mimi Multi-Sock... owns a lot of socks! She owns a total of $N$ pairs of socks, and every $P$-th day she acquires a new pair (these are days numbered $P, 2P, 3P \dots$). She is superstitious and maintains good hygiene, so she never wears new socks on the day she receives them. Moreover, Mimi does not like to wear the same socks again – at the beginning of the day she puts on a pair she has not worn before, and at the end, this pair goes into a special "Sock Archive". Because Mimi is very worried, and you are her good friend, she asks you for a very special favor – write a program that calculates how long she can "survive" this way without going barefoot.

## Input
The first line of the standard input contains the number $T$ of test cases. Each test consists of 2 lines.
The first line contains the integer $N$ – the number of pairs she owns at the beginning ($1 \le N \le 100$).
The second line contains the integer $P$ ($1 < P \le 100$) – indicating every how many days she receives new socks.

## Output
For each test, your program must output a single value on a separate line – the number of days during which Mimi had socks.

## Example

### Input
```
5
2 2
9 3
10 2
100 100
1 99
```

### Output
```
3
13
19
101
1
```

### Explanation
In the first test, Mimi starts with 2 pairs, which she wears during the first 2 days. On the second day, she receives a new pair, which she can wear at the earliest on the third day, which she does. But since she receives only one new pair every two days, she has no new pair for the fourth day and then remains barefoot. Therefore, she survived with socks for only 3 days.
In the second test, Mimi starts with 9 pairs, which she wears for the first 9 days. During this time, she received new pairs on days 3, 6, and 9, which help her reach days 10, 11, and 12, respectively. While wearing her last socks, on the 12th day she receives a new pair, which is enough for the 13th day. Unfortunately, she is out of luck and on the 14th day remains barefoot because she did not wait for the arrival of the new pair.
The logic is analogous in the other tests.
