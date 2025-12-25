# ADVENTURE

## Description
Anya and her friends have some free time and decide to go on a train adventure. They have identified $M$ cities they would like to visit, starting from city 1 and ending in city $M$, but they are not interested in the order of the other cities, nor whether they will visit all of them. They, of course, are well prepared, so they also know the price of train tickets between cities.

However, the towns have a peculiarity - the station where trains arrive is different from the one they depart from. So Anya and company have another obstacle to overcome - they have to get from point 1 to point $N_i$ to catch the next train. But because they have heavy bags, they prefer this to happen in the shortest possible time, i.e., by traversing the fewest possible streets (streets in a city have the same length).

Anya has prepared a map of the BDZ (Bulgarian State Railways) network and maps of individual cities - a list of all $N_i$ intersections in city $i$ ($1 \le i \le M$) and the connections between them. Now she is interested in which cities they should pass through and for each city - through which intersections, so that they pay the least for tickets and walk the least. In each town, she and her friends start from intersection 1 and end at intersection $N_i$.

It is important to note that trains only move in one direction, and successfully reaching the final destination is always possible.

## Input
The first line of the standard input reads integers $M$ and $K$ - the number of cities and the number of connections between them.
$K$ lines follow, specifying that the train from city $X$ to city $Y$ costs $T$.
$M$ blocks follow, each in the format: $N_i K_i$ - number of intersections and number of connections between them, followed by $K_i$ lines, specifying that there is a street from intersection $V_i$ to intersection $U_i$. Our friends walk, so they can move in both directions.

## Output
The first line of the standard output should be a single integer - the cost of the train tickets.
Then $S$ numbers are listed - the cities they will pass through.
On each of the next $S$ lines, the path of movement through the corresponding city is output. If there are several routes with the same cost or distance, any of them is accepted.

## Constraints
* $0 < M \le 500$
* $0 \le N_i \le 100$
* $0 < T \le 100$
