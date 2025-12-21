# Connected Villages

## Description
Once upon a time in a distant land, there was a group of villages separated by dense forests and deep rivers. The villages had no means of communication or trade, and each village was self-sufficient, but the people longed for a better life.

One day, a wise old man came to the villages and spoke with the elders. He told them about the wonders of trade and how it could bring them prosperity. But he also explained that for trade to take place, the villages needed to be connected, and the only way to do this was to build roads through the forests and bridges over the rivers.

The elders were convinced and decided to work together to build roads and bridges. However, they soon realized that they didn't have enough resources to build all the roads and bridges that were needed, and they didn't know where to start at all.

Help the people by writing a program to help them identify the minimum number of roads they need to build to connect all the villages. The algorithm should find the minimum spanning tree of the village road network.

Thus, the villages will be connected, and trade will flourish. The people will be grateful for your help and enjoy the prosperity that will come with their newly connected world. From that day on, the villages are no longer isolated and will become known as the Connected Villages, a shining example of the power of cooperation and technology.

## Input
On the first line of the standard input, two integers are entered: $N$ and $E$, which correspond to the number of villages and the number of roads between them, separated by a single space.
The next $E$ lines contain three integers: $U, V, W$, which correspond to a road from village $U$ to village $V$ with length $W$.

## Output
On the standard output, the program must find and print the minimum spanning tree of the village road network.

## Example

### Input
```
7 8
1 3 1
1 4 2
2 3 3
2 4 4
2 5 5
5 6 6
6 7 7
3 6 8
```

### Output
```
1 3
1 4
2 3
2 5
5 6
6 7
```
