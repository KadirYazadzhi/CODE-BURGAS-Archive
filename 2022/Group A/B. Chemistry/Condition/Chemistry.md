# Chemistry

## Description
There is definitely chemistry between Gosho and Mimi! But whether there is chemistry between chemistry and Mimi is a debatable question! She was in a lot of trouble on a relatively easy chemistry test. Of course, she decided to use the chemistry between herself and Gosho to save her skin! Gosho, as a know-it-all, has created an image of understanding everything, but at the same time, he thought that H2O, since it rusts metals, is a dangerous substance for people too! And since you are Gosho's smartest friend, now you have to help him save his skin! To do this, you need to write a program that can check whether a chemical equation is correctly balanced or not. Each chemical equation will have a left and right side. The left side contains the chemical formulas of the reactants, and the right side contains the chemical formulas of the products. The left and right sides are separated by "->". Different chemical formulas are separated by a "+" sign. Each molecule is described by uppercase letters and digits. A2B3C4 corresponds to 2 atoms of type A, 3 atoms of type B, and 4 atoms of type C.

## Input
The program receives an integer $N$ ($1 \le N \le 10$) on the first line.
On each subsequent line, strings are provided, containing the equations. Each of these strings is no longer than 1000 characters.

## Output
For each of the $N$ equations, output "YES" if it is correctly balanced and "NO" otherwise.

## Example

### Input 1
```
3
A+B->AB
AB+CD->AC+DB
AB+B->AB
```

### Output 1
```
YES
YES
NO
```

### Input 2
```
4
2H2O+2CO2->2H2CO3
H2SO4->H2O4
NH3+H2SO4->NH4SO4
CH4+2O2->CO2+2H2O
```

### Output 2
```
YES
NO
NO
YES
```
