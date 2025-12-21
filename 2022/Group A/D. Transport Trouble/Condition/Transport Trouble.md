# Transport Trouble

## Description
It happened! Mimi finally invited Gosho on a date! Of course, things are not easy at all. Mimi lives far away, Burgas is big, and Gosho has to fight to reach her (physically and her heart, of course)! For this purpose, he has to overcome a transportation problem!

In the city of Burgas, there are $N$ stops. They are connected by $M$ bus routes, where the journey from stop $a_i$ to $b_i$ takes time $t_i$. To reach Mimi quickly and safely, Gosho can change at most $K$ buses. Because Gosho is very absent-minded, it might turn out that he needs to know the shortest time to reach between different stops, according to his needs. You will receive $Q$ queries from him, and for each of them, you must return the shortest time to reach from one stop to another. If there is no such possibility, answer with -1.

## Input
The first line contains two integers $N$ ($1 < N < 70$) and $M$ ($1 < M < 10^6$), separated by a space.
Each of the next $M$ lines contains three integers in the format: `ai bi ti` ($1 < a_i, b_i < N, 1 < t_i < 10^6$).
The next line contains two integers $K$ and $Q$ ($1 \le K \le 10^9, 1 \le Q \le N^2$), the maximum number of buses changed and the number of queries.
The next $Q$ lines contain two integers in the format: `cj dj`, which are the starting and ending positions for which the query is made.

## Output
Output $Q$ lines, and on each line, output the obtained minimum time for the corresponding query.

## Example (No example provided in the original text, but based on typical competitive programming problems, I can infer a generic structure)

### Input
```
... (example input based on description) ...
```

### Output
```
... (example output based on description) ...
```
