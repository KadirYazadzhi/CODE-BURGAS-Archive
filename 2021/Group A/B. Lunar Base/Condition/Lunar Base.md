# LUNAR BASE

## Description
The year is 2077. Earth's resources are depleted, and humanity has turned its gaze to space, specifically to the Moon, to extract precious resources. A new generation of autonomous construction drones, "SD101" series, have been developed to build lunar bases for resource extraction.

Your task is to program such a drone. The drone receives a terrain profile (a list of heights $A$) for the area where a lunar base is to be built. The base must be leveled to a certain depth $D$. The drone operates in 100-meter segments.

The drone has three types of commands:
*   `DIG d`: The drone moves 100 meters forward and digs $d$ meters down from the current terrain level. This action accumulates $d$ units of building material. $d$ must be non-negative. If $d=0$, it just moves 100 meters and doesn't change the terrain height.
*   `BUILD b`: The drone moves 100 meters forward and builds $b$ meters up from the current terrain level. This action consumes $b$ units of building material. $b$ must be non-negative. The total material consumed by all `BUILD` commands cannot exceed the total material accumulated by all `DIG` commands up to that point.
*   `MOVE x`: The drone moves $x$ meters forward without performing any `DIG` or `BUILD` actions. A program can contain at most one `MOVE` command.

The goal is to write the first program for the drone that processes the entire terrain profile such that:
1.  All segments of the terrain are leveled to depth $D$.
2.  The total accumulated building material (from `DIG` commands, after accounting for `BUILD` commands) is maximized.
3.  If there are multiple programs that achieve the maximum accumulated material, choose the one with the maximum total length (in meters).

If no program can be generated that results in non-negative accumulated material, output "NO RESOURCES".

## Input
*   $D$: The target depth for the base (integer, $0 \le D \le 100000$).
*   $A$: A list of $N$ integers representing the initial terrain heights ($-100000 \le A_i \le 100000$), where $0 < N \le 50000$. Each element $A_i$ corresponds to a 100-meter segment.

## Output
*   A sequence of commands for the drone, separated by newlines, that achieves the goal.
*   If no such program can accumulate non-negative material, output "NO RESOURCES".

## Example 1

### Input
```
150
-450 -250 350 250 50 -150 150 -350 -50
```

### Output
```
MOVE 200
DIG 500
DIG 400
DIG 200
DIG 0
DIG 300
```

## Example 2

### Input
```
100
0 -300 0 100 -200 0
```

### Output
```
DIG 100
MOVE 100
DIG 100
DIG 200
BUILD 100
DIG 100
```

## Example 3

### Input
```
0
-100 -100 -100
```

### Output
```
NO RESOURCES
```
