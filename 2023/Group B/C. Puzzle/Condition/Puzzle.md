# Puzzle

## Description
Rositsa is solving the following puzzle: A square table of size $n \times n$ is given, in each cell of which an uppercase Latin letter is written. Additionally, a list of keywords is given. Rositsa must take each keyword in turn and find it in the table. This means finding all the letters of this word in the table, with the letters arranged in such a way that the cell containing each subsequent letter of the word is adjacent to the cell containing the previous letter. Cells are called adjacent if they share a common side, i.e., they are adjacent vertically or horizontally. Once Rositsa finds the word, she crosses it out from the table. Crossed-out letters cannot be used in other keywords. After all letters from the keywords are found and crossed out, several letters remain in the table, from which Rositsa must guess the word encrypted in the puzzle. You can help Rositsa by writing a program `conundrum` which, given a table and a list of keywords, prints the letters that form the word hidden in the puzzle.

## Input
From the first line of the standard input, two integers $n$ and $m$ are entered, separated by a single space.
From the next $n$ lines, $n$ uppercase Latin letters are entered, describing the puzzle.
The next $m$ lines contain the keywords. The keywords consist only of uppercase Latin letters. Each keyword can be found and crossed out in the table in the manner described above.

## Output
On a single line of the standard output, the program should output the letters remaining in the table, sorted alphabetically.

## Constraints
* $1 \le n \le 10$
* $0 \le m \le 10$
* $1 \le$ number of characters in a keyword $\le 20$

## Example

### Input 1

```
5 3
POLTE
RWYMS
OAIPT
BDANR
LEMES
OLYMPIAD
PROBLEM
TEST
```

### Output 1

```
AENRSW
```

### Input 2

```
3 2
ISQ
ABC
IQW
I
IS
```

### Output 2

```
ABCQQW
```
