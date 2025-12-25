# SPELL CHECK

## Description
Spell check is performed by checking the word to be corrected against a set of predefined words (dictionary). If a given word is not found in the dictionary, we try to find the closest ones to it. A popular technique for comparing the similarity between two words is finding a number we call the distance between the given words. This number determines the number of changes that need to be made to transform one word into the other. A change is considered one of the following: adding, deleting, or replacing a letter with another. Examples of distance between two words:
* Distance(book, books) -> 1
* Distance(book, boo) -> 1
* Distance(books, boo) -> 2
* Distance(book, cake) -> 4

## Input
The first line of the standard input contains the number of words ($N$) for checking.
The next $2 \times N$ lines contain pairs of words, separated by a newline.

## Output
For each pair of words, output the distance between them.

## Example

### Input
```
4
book
books
book
boo
books
boo
book
cake
```

### Output
```
1
1
2
4
```
