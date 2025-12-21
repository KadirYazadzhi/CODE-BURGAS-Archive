# Spelling

## Description
Once upon a time, there was a young programmer named Lily who was assigned the task of creating a spell-checking program for a company. The program had to be able to suggest the correct spelling of a word, even if the user misspelled it.

To solve the task, Lily realized she needed to use an algorithm that calculates the minimum number of edits (insertions, deletions, or substitutions) required to transform one string into another. Every time the user enters a word that is not found in the dictionary, the program must use the algorithm to find the closest match in the dictionary.

Help the programmer Lily by writing a spell-checking program that suggests the correct spelling of a misspelled word with a high degree of accuracy.

## Input
From the first line of the standard input, a single integer $n$ is entered, which corresponds to the number of words that make up the spell-checking dictionary.
From the second line of the standard input, $n$ words are entered that make up the spell-checking dictionary, separated by spaces.
From the third line of the standard input, the misspelled word to be checked is entered.

## Output
On a single line of the standard output, the program should output the correctly spelled word from the dictionary with an accuracy of up to 3 characters (edit distance $\le 3$). If no such word exists, output the message `WORD NOT FOUND`.

## Example

### Input
```
5
apple banana cherry elderberry grape
merry
```

### Output
```
cherry
```
