# Information Board

## Description

An information board was installed in the central meadow of the Fairy Forest so that every inhabitant could post announcements. During the first week, interest was immense—almost everyone had something to share. As a result, the board was quickly covered with several layers of posters, brochures, and other materials. In the ensuing chaos, some inhabitants were disadvantaged because their announcements were only partially visible or completely covered by others.

The Forest Administration needs to restore order, but to make the right decisions, they first need to collect data on the current situation. The first question they want to answer is: **how many square centimeters of the visible area of the board does each forest inhabitant currently occupy?** Your task is to write a program to help the administration solve this problem.

### Coordinate System

* The board is rectangular with dimensions  centimeters ().
* The coordinate system starts at  in the **top-left corner**.
* The horizontal component () increases to the right.
* The vertical component () increases downwards.

### Placement Rules

* Each announcement is a rectangle of  centimeters ().
* Sides are always parallel to the edges of the board.
* If part of a poster extends beyond the board's boundaries, that part is **clipped (removed)**.
* Posters are applied in a specific sequence. A newer poster is placed **on top** of all previous ones, covering any overlapping areas.

---

## Input

1. **First line:** Two integers  and  (Width and Height of the board).
2. **Second line:** An integer  () — the number of inhabitants who posted something.
3. **Next  lines:** Each line contains a unique name of a forest inhabitant.
4. **Next line:** An integer  () — the total number of posters glued to the board.
5. **Next  lines:** Each line follows the format `x y a b name`.
* `x`, `y`: Top-left corner coordinates.
* `a`, `b`: Width and height of the poster.
* `name`: The owner of the poster.
* *Note: The order of these  lines represents the order of application (from bottom to top).*



---

## Output

Output the results in the following format: `name area`.

* `name`: The inhabitant's name.
* `area`: Total visible square centimeters of all their posters combined.
* **Do not** output information for inhabitants whose posters are completely covered (visible area = 0).
* The output order must match the order in which the names were provided in the input (the  names).

---

## Example

### Input

```
10 10
3
zajo
bajo
mecho
4
0 0 10 10 mecho
4 4 1 1 zajo
0 0 10 5 bajo
3 3 5 9 mecho

```

### Output

```
bajo 40
mecho 60

```