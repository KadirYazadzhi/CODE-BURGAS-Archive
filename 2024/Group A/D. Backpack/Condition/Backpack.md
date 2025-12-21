# Backpack

## Description
You have a backpack with a maximum capacity of $W$ kilograms and $N$ items, each with a certain weight and value. Your task is to choose a combination of items such that the total weight does not exceed the backpack's capacity, and the total value is maximized.

## Input
The first line contains two integers: $W$ - the maximum capacity of the backpack, and $N$ - the number of items.
The next $N$ lines contain pairs of numbers, where each pair represents the weight and value of an item.

## Output
Return the maximum possible value that can be achieved with the items in the backpack without exceeding the total weight.

## Example

### Input
```
50 3
10 60
20 100
30 120
```

### Output
```
220
```

### Explanation
The maximum value is achieved when the first and second items are taken, which have a total weight of 30 and a total value of 160.
*(Translator's note: The provided example output 220, but first and second items are 10+20=30kg, value 60+100=160. If we take second and third, 20+30=50kg, value 100+120=220. This fits the output better than the explanation)*
(The example output of 220 is achieved by taking items with weights 20 and 30, and values 100 and 120, totaling 50kg weight and 220 value. The explanation seems to be for a different scenario or miscalculated.)

My explanation:
The maximum value of 220 is achieved by selecting the items with weights 20kg (value 100) and 30kg (value 120). Their combined weight is 50kg, which exactly matches the backpack capacity, and their total value is 220.
