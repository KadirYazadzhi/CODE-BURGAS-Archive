# Meridians

## Description
A meridian is an imaginary line located on the Earth's surface, from the North to the South Pole, containing all points with the same geographical longitude. The unit of measure for the angle where two meridians intersect and form at the poles is called a degree. One degree ($1^\circ$) is divided into 60 minutes ($60'$), and one minute into 60 seconds ($60''$). Thus, every angle is measured in degrees, minutes, and seconds.

For given angles $\alpha$ and $\beta$, we can find the sum and difference of these measures. For example, let's find the measures of the sum and difference of two angles $\alpha = 28^\circ 43'$ and $\beta = 20^\circ 58' 38''$:
$\alpha + \beta = 28^\circ 43' + 20^\circ 58' 38'' = 48^\circ 101' 38'' = 49^\circ 41' 38''$
$\alpha - \beta = 28^\circ 43' - 20^\circ 58' 38'' = 27^\circ 102' 60'' - 20^\circ 58' 38'' = 7^\circ 45' 22''$

Additionally, for a given angle measure, we can consider half of that measure. For example, the angle bisector of an angle $\alpha = 121^\circ 13' 0''$ divides it into two angles, each equal to $\alpha/2$; $\alpha : 2 = 121^\circ 13' : 2 = 60^\circ 36' 30''$ (if seconds do not divide exactly by two, the integer part of the division is taken).

Write a program that calculates the measure of the sum or difference of the measures of two given angles and outputs the measure of half of the thus obtained sum or difference.

## Input
From the first line of the standard input, six integers are entered, separated by a space. The first triplet of numbers shows the measure of the first angle in degrees, minutes, and seconds; the second triplet - the measure of the second angle.
From the second line, a sign `+` or `-` is entered, which indicates what operation will be performed with the two angles.

## Output
On the standard output, three integers should be printed - the measure of half the sum or half the difference in degrees, minutes, and seconds.

## Constraints
When subtracting angles, the measure of the first entered angle is greater than the measure of the second ($\alpha > \beta$).
Degrees are integers between 0 and 360, inclusive.
Minutes and seconds are integers between 0 and 59, inclusive.
Thus, the largest measure we consider is $360^\circ 59' 59''$, and the smallest is $0^\circ 0' 0''$.

## Example

### Input
```
28 43 0 20 58 38
+
```

### Output
```
24 50 49
```
