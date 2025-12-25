# SCHEDULE

## Description
Anya and Georgi like each other very much and want to spend as much time together as possible, so they want to attend the same classes if possible. However, each of them really wants to attend a different first class, and depending on their first class, their schedule takes into account specifics such as the closest hall (because it's not optimal to run all over the faculty and lose coffee time). Therefore, the sequence of which class can be attended after what is precisely fixed (from one class you can go to exactly one other, but enter after several different ones).

Write a program that, given different sequences of classes (input is valid), tells Anya and Georgi how many hours they would spend together until the end of the day. The school day starts at 8 with the earliest class, and each class lasts 1 astronomical hour. The curricula start at different times but end at the same time, and each ends with an empty class (`finalDestination`).

## Input
The standard input is given $N$ - the number of possible programs. Each of the next $N$ lines contains a sequence of ordered pairs (time, hall), ending with `finalDestination`. After that, the subjects Anya and Georgi have chosen for their first class are given.

## Output
The program should output the number of hours they would spend together until the end of the day.

## Constraints
* $N \le 5000$

## Example

### Input
```
5
algebra fmi101, dis fmi101, sdp fmi325, finalDestination
oop fhf210, geometria fmi101, kmr fmi200, ds fmi200, sdp fmi325, finalDestination
sdp fmi325, finalDestination
oop fmi200, dis fmi101, sdp fmi325, finalDestination
geometria fmi500, kmr fmi326, finalDestination
algebra
oop
```

### Output
```
11
```

### Explanation
Classes end at 13. Anya chooses program 1 because it's the only one that starts with algebra at 10. Georgi has a choice between programs 2 and 4 - both start with oop, but in different halls. He chooses program 4, which starts at 10. Both their second classes coincide.
