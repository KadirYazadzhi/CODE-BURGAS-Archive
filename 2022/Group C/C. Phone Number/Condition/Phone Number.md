# Phone Number

## Description
A phone number, besides being written with digits, can also be written with letters from the English alphabet for easier memorization. On the keyboard of all modern phones, there are corresponding markings that help dial such numbers.

**Letters:** ABC DEF GHI JKL MNO PQRS TUV WXYZ
**Digit:**   2   3   4   5   6   7    8    9

Write a program that translates a phone number written with letters and digits into a phone number containing only digits.

## Input
From the first line of the standard input, a string $S$ is entered, representing a phone number. The string consists of uppercase Latin letters and digits, as well as the character '-' (hyphen) as a separator.

## Output
On a single line of the standard output, the program should output the normal phone number, replacing letters with digits, according to the table given above.

## Constraints
* $3 \le S \le 30$ characters

## Example

### Input
```
1-888-SHOP-IBM
```

### Output
```
1-888-7467-426
```
