# Forestry

## Description
Recently, Pesho the Penguin inherited a large amount of forest land in a "magical forest" in the middle of Tratonzos Nature Park. To his regret, over the years (due to poor management), many poachers have cut down trees in the areas, leading to a decrease in magical energy in the vicinity, an increase in floods, a decrease in game, and so on.

As a responsible owner, Pesho decided to restore the forest, and for this purpose, he acquired a magical condor that can carry and scatter tree seeds while flying over the areas. Despite its powerful magic, the condor can carry only a certain amount of seeds $C$ for a time $T$.

Because he is a great magician, Pesho has mapped his areas on a magical map, and for each area, he has measured the necessary amount of seeds to plant it - $C[i]$ and the necessary time - $T[i]$, for which the condor can fly over the entire area.

In addition, Pesho has measured how much time it takes for the condor to fly between nearby areas. To make it easier, he has recorded this information in rows of the form $a[i] b[i] t[i]$, where $t[i]$ is the flight time between $a[i]$ and $b[i]$. The flight time between $b[i]$ and $a[i]$ is also $t[i]$.

Refilling the condor with seeds is a laborious task, and for this reason, Pesho wants you to help him calculate the minimum number of recharges with which all areas can be planted.

## Input
The first line of the standard input provides four numbers $N, M, C_{condor}, T_{condor}$.
$N$ - number of areas to be planted.
$M$ - number of possible flights between two areas.
$C_{condor}$ - capacity of the condor.
$T_{condor}$ - time the condor can fly without recharging.
The next $N$ lines are of the form $C_i, T_i$, which describe the capacity and flight time of the areas.
The next $M$ lines are of the form $a_i, b_i, t_i$, the numbers of two areas (in order of input) and the time needed to fly between them.

## Output
On the standard output, you should print one number - the minimum number of recharges of the condor required to plant all areas.
The condor cannot plant partially (the entire capacity of the area must be used).

## Constraints
* $5 \le N \le 20$ - number of areas to be planted
* $5 \le M \le 200$ - number of possible flights between two areas
* $5 \le C_{condor} \le 400$ - capacity of the condor
* $5 \le T_{condor} \le 400$ - time the condor can fly without recharging
* $5 \le C_i \le C_{condor}$ - capacity of area $i$
* $5 \le T_i \le T_{condor}$ - time to fly over area $i$
* $1 \le a_i \le N$
* $1 \le b_i \le N$
* $1 \le t_i \le T_{condor}$ - flight time between $a_i$ and $b_i$

## Example

### Input
```
5 8 30 40
10 20
20 30
15 14
30 15
10 30
1 2 10
2 3 40
1 3 1
1 5 10
2 5 15
4 5 4
4 3 1
2 4 5
```

### Output
```
3
```
