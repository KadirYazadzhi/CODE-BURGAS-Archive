# Book

## Description
Mimi loves to read. One time she came up with an interesting riddle to tease her friends. She grabs a book and counts all the digits that make up the page numbers, and then asks her riddle: "If the book I'm reading requires 2893 digits to mark the numbers of all the pages, how many pages does this book have?". Since you don't like Mimi making you feel stupider than her, you will take on the task and with the help of the computer find the answer to this riddle for an arbitrary number of digits!

## Input
The first line of the standard input contains the number $T$ of test cases. Each test consists of 1 line.
The line contains 1 integer $N$ – this number shows how many digits are needed to mark the pages of the book Mimi is asking about.

## Output
For each test, your program must output the sought number of pages on a separate line.

## Constraints
All input numbers are in the range $[1; 5000]$.

## Example

### Input

```
3
2893
11
195
```

### Output

```
1000
10
101
```

### Explanation
In the first test, we need 2893 digits. For the first 9 pages, we need 9 digits, for pages 10 to 99 we need $90 \times 2 = 180$ digits, and for pages 100 to 999 we need $900 \times 3 = 2700$ digits. $9 + 180 + 2700 = 2889$. This means exactly 4 digits remain ($2893 - 2889 = 4$), which form one page (page 1000 has 4 digits). Therefore, our book has 1000 pages.
In the second test, we have 11 digits. Knowing that 9 of them are for the first 9 pages, then only 2 digits remain, which form the 10th page.
In the third test, we have 195 digits. 9 of them are for the first 9 pages, and for pages 10 to 99 we need 180 digits ($9+180=189$). This means $195-189=6$ digits remain, which are for pages 100 and 101 (3 digits each).
