# Goshos Union

## Description
Gosho decided to found a union of programmers in our beautiful corner of the planet. Since this is a real union, and real unions need a flag, he has to come up with one. Gosho is good at this and came up with the following flag: it is rectangular, dark blue with a white circle inside. The ratio of the length ($W$) of the flag to its height ($H$) is 10:6. On the other hand, the ratio of the length ($W$) to the radius of the circle is 5:1. Besides being a good programmer, Gosho is also a good soul and gives you the following explanatory example: "If the length is 10, then the width is 6, and the radius of the circle is 2".

However good Gosho is, you also have to do some work in the name of this programmers' union! Your task is, given a length ($W$), to find the area of the white circle, as well as the area of the dark blue section of the flag, and then print the results to the screen.

## Input
The first line of the standard input contains the number $T$ of test cases. Each test consists of a single line.
The line contains the number $W$ – the length of the flag ($1 \le W \le 1000$).

## Output
For each test, your program must output two values on a separate line – rounded and formatted to two decimal places.

## Note
Use the constant `M_PI` from the C++ math library for a correct value of PI in the context of this problem.

## Example

### Input
```
2
10
15
```

### Output
```
12.57 47.43
28.27 106.73
```

### Explanation
In the first test, the length is 10. Since the ratio between length and height is 10:6, the height is 6. The ratio between length and radius is 5:1, therefore the radius is 2. Thus, the total area of the entire flag is 60, since the flag is rectangular. The area of the white circle is 12.57, and the area of the dark blue part is the difference between the area of the entire rectangle and the area of the circle, namely: 47.43.
In the second test, the length is 15. Since the ratio between length and height is 10:6, the height is 9. The ratio between length and radius is 5:1, therefore the radius is 3. Thus, the total area of the entire flag is 135. The area of the white circle is 28.27, and the area of the dark blue part is 106.73.
