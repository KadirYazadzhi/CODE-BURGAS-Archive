# Magic Compression

## Description
Guess who's back? Our favorite wizard - Pesho the Penguin.
10 years have passed, but Pesho is back in the magical circles.
After graduating from FMA (Faculty of Magical Arts) at BFU (Burgas Free University of White Magic), Pesho devoted himself to entrepreneurship (a forbidden form of magic).
In the last few months, he has been developing a new, innovative system for magical services called the S^3 Platform.
Using this platform, he will create a powerful Artificial Intelligence, with his ultimate goal being to achieve synergy between magic and science. Every wizard's dream.

Magical platforms must be very fast, and they use magical network connections for their components to work. That is why Pesho has invested a huge amount of time in creating a new, innovative algorithm to compress the amount of magical matter sent between two components.
Quite coincidentally, magical matter can be represented as a circular string of characters of size $N$.
In this circular string, Pesho is looking for the longest palindrome, and if he finds it, he will be able to achieve the best compression.

On the other hand, magical matter has a special property that allows an unlimited amount of characters to change their values and take any valid ones. Unfortunately, this special property can be used only once and only for a specific area (substring) of characters. In addition, the area (substring) must be composed entirely of characters different from those found in the mirrored part of the palindrome.

Your task is to help Pesho and write a program that, given a circular character string, finds the largest palindrome that meets the given criteria and outputs its size.

## Input
A circular character string (single line).

## Output
Output the size of the largest palindrome.

## Constraints
* $3 \le N \le 10000$
* An area (substring) of characters can be replaced only once.
* The character string consists only of lowercase Latin letters.
* In 20% of the tests $N \le 100$.
* In 20% of the tests $N \le 1000$.
* In 50% of the tests, the maximum palindrome does not contain a magical area (substring).
* The size of the area must be smaller than $N/2 - 1$.
* There must be at least one character that is the same in the mirrored part of the palindrome.

## Example

### Input 1
```
dalabcdab
```

### Output 1
```
9
```

### Explanation 1
By replacing the area (substring) `abd` with `dcb`, the new circular string would become `balabcddc` and the palindrome `dcbalabcd` has the greatest length. By replacing back `dcb` with `abd`, the answer `abdalabcd` is obtained.

### Input 2
```
abcdabdal
```

### Output 2
```
9
```

### Explanation 2
By replacing the area (substring) `abd` with `dcb`, the new circular string would become `abcddcbal`. If we start looking for the maximum palindrome from position 1, then we get the following palindrome `dcbalabcd`. By replacing back `dcb` with `abd`, the answer `abdalabcd` is obtained.
