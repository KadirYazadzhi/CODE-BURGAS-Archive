# The Secret Of Words

## Description
You are a secret agent and need to decode messages sent by your agency. Messages are encoded as long strings of characters. Your task is to find all substrings that contain the word "agent" and count how many times it appears. If the number of occurrences of the word "agent" is greater than 5, you should send an `ALERT` signal.

## Input
A text string with a length of up to $10^6$ characters.

## Output
On the first line, output the number of occurrences of the word "agent".
On the second line, output an `ALERT` signal if the number of occurrences is greater than 5, otherwise output `NO ALERT`.

## Example

### Input
```
agentagentagentagentagentagentagent
```

### Output
```
7
ALERT
```
