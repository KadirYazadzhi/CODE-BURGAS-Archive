# Animatanto

## Description
The inhabitants of the Fairy Forest decided to introduce a common standard mathematical language and call it "Animatanto". Until now, different animals used different dialects and often misunderstood each other, which is the reason for this initiative.

Since the task is responsible, they would like to try several dictionary variants to translate the most common mathematical phrases and compare how they sound.

Write a program that reads a dictionary of words corresponding to each of the digits and the symbols "+", "-" and "=". Using this dictionary, a series of expressions of the type: A+B=C or A-B=C, where A, B and C are digits, must be translated.

## Input
The first line contains 10 words, separated by spaces, corresponding to digits from 0 to 9.
The second line contains 3 words, separated by spaces, corresponding to "+", "-" and "=". Each of these 13 words has a maximum length of 5 characters.
The third line is the number $N$, specifying the number of expressions to be translated.
The next $N$ lines contain expressions of the type A+B=C or A-B=C.

## Output
For each expression from the input, on a separate line, you must print the corresponding translation in Animatanto. There must be a space between individual words.

## Example

### Input
```
мяу бау муу грух буху иа зъ бее ии цър
пуф зън въй
3
1+2=3
4+5=9
8-7=1
```

### Output
```
бау пуф муу въй грух
буху пуф иа въй цър
ии зън бее въй бау
```
