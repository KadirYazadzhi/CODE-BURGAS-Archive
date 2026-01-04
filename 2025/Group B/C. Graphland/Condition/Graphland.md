# Graphland

## Description

Once upon a time, there was a magical kingdom woven from paths and crossroads called **Graphlandia**. This kingdom was built of **N** radiant vertices, connected by **M** paths through which messages, gold, secrets, and dreams were carried. The Count of Graphlandia, an old and wise ruler, posed a riddle to his subjects:

*"Oh, citizens of Graphlandia,"* he spoke, *"finding the shortest path from the Mighty Tower A to the Majestic Palace B is of vital importance. Who among you will succeed in tracing the path through our tangled and directed highways? Remember, time is of the essence!"*

The subjects of Graphlandia set to work, armed with mathematical precision and algorithmic magic. Help Graphlandia by writing a computer program to solve this quest.

### Input

* The first line of the standard input contains two integers, **N** and **M**, representing the number of vertices and the number of paths in Graphlandia.
* Each of the following **M** lines contains three integers: the starting vertex, the ending vertex, and the weight (distance) of that path.
* The last line contains two integers, **A** and **B**, representing the Mighty Tower and the Majestic Palace between which we seek the path.

### Output

* Print a single positive integer representing the shortest path between **A** and **B**.
* If no such path exists, print **NO SOLUTION**.

### Example

**Input:**

```text
5 6
1 2 2
1 3 4
2 3 1
2 4 7
3 5 3
4 5 1
1 5

```

**Output:**

```text
6

```
