# NET

## Description
Two friends, Ani and Mitko, share an internet channel. The load balancing system is configured such that if at any given moment the channel is used by only one person, the file download is performed at a speed equal to the bandwidth. If the channel is used by several people, the channel's throughput is divided equally among the users.

Loss of speed when transmitting control information over the channel is not considered. There is no additional network activity during file downloads. The answer is an integer in seconds.

For example, let the bandwidth be 256 Kbytes. Ani starts downloading a file of 10 Mbytes. Some time later, Mitko starts downloading a file of 6 MBytes. Mitko finishes downloading his file 8 seconds later than Ani. Calculate how many seconds each of the users, Ani and Mitko, download their files?

## Input
The standard input provides:
*   On the first line, the channel speed.
*   On the second line, the file sizes of the users.
*   On the third line, the delay time of the second user, given in an integer number of seconds, for which the second user finishes their file after the first one has finished.

## Output
Output the download times for the users' files as integers (seconds) to the standard output.

## Example

### Input
```
256
10 6
8
```

### Output
```
56
40
```
