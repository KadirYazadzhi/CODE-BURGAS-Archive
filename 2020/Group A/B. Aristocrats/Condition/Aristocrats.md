# Aristocrats

## Description
The employees of a biological laboratory loved their experimental mice very much and, as a sign of gratitude, decided to add aristocratic titles (queen, prince, etc.) to their names. The chosen titles had to reflect the family ties between the mammals.

Since the laboratory only recorded which mouse was the mother of a newborn, they decided that titles should also be passed down through the maternal line. In this way, several sets (families) were formed, with each mouse belonging to only one family.

To prepare a sufficient number of titles, the scientists are interested in the maximum number of generations among the aristocratic families formed.

You are required to write a program that, given the family ties (mother - child), calculates the number of generations in the longest family line.

## Input
The first line of the input contains the number $N$ ($1 \le N \le 1000$) - the number of family ties between the mice that the program needs to process.
The next $N$ lines contain pairs of integers: `mother child`
where `mother` is the identifier of the mother mouse, and `child` is the identifier of the child mouse in the records. The numbers have a value between 1 and 100000 and are unique for each mouse.

## Output
The program should output a single line with an integer - the greatest length of a family line.

## Example

### Input
```
6
101 102
102 234
234 932
101 2555
654 655
655 656
```

### Output
```
4
```
