# Liar

## Description
Pesho the Penguin is here again, and this time he is the owner of a "magic security" company.
Lately, in the city of Poros, where the company's headquarters are located, increased levels of a very dangerous magical disease called "liar" have been observed. Infected by it, people begin to speak only lies. There is no antidote to this dangerous disease.

Pesho's "magic security" company has been hired to protect Poros from the dangerous disease, but for this purpose, it needs to develop a magical reaction system against the disease. To create the system, the authorities in Poros provide Pesho with a coordinate map of the city with its residential, administrative, and business centers. In addition, special "lie-catchers" are located throughout the city to understand when and where there is a disease outbreak and someone starts lying.

Outbreaks are categorized into five levels:
1.  Level 1 - there is a risk of infection of a Level 1 object (ordinary citizens)
2.  Level 2 - there is a risk of infection of a Level 2 object (private companies, civic associations, foundations, etc.)
3.  Level 3 - there is a risk of infection of a Level 3 object (schools, kindergartens, and universities)
4.  Level 4 - there is a risk of infection of a Level 4 object (stadiums, hospitals, polyclinics, etc.)
5.  Level 5 - there is a risk of infection of a Level 5 object (state institutions, political parties, non-governmental organizations, etc.)

At any given moment, the "lie-catchers" can detect the degree of danger of infection and send the coordinates of the outbreak to the system developed by Pesho's company.

For the authorities to react to the outbreak, the reaction system must find the closest $K$ objects with the same danger level as the outbreak and sum the squared distances to them. To assess the danger for the analysis period, the authorities are interested in the sum of these sums.

To each query directed to the system, the number $K$ of the closest objects sought is applied.

Your task is to help Pesho develop the system by writing a program that responds to the described queries.

## Input
The first line of the standard input contains two numbers $N$ and $Q$.
$N$ - number of objects of interest to the authorities.
$Q$ - number of outbreaks (queries from the authorities).
The next $N$ lines are of the form $X_i, Y_i, L_i$, which describe the objects at risk of infection.
The next $Q$ lines are of the form $X_i, Y_i, L_i, K_i$, which describe the queries made by the authorities.

## Output
On the standard output, you should print a single floating-point number - the sum of the sums of the squared distances between the objects and the outbreaks from the authorities' queries. The accuracy of the number must be 4 decimal places.
Squared distance is the standard Euclidean distance raised to the second power.

## Constraints
* $200 \le N \le 50000$
* $200 \le Q \le 500000$
* $-1.0 \le X_i \le 1.0$ - each X coordinate of the objects or outbreaks (queries)
* $-1.0 \le Y_i \le 1.0$ - each Y coordinate of the objects or outbreaks (queries)
* $1 \le L_i \le 5$ - each level of danger of infection from "liar"
* $1 \le K_i \le 10$ - the number of closest objects that are in danger for each outbreak (query)

## Example

### Input
```
5 9
0.151876 0.857360 4
0.151876 -0.857360 5
0.471819 0.731792 1
0.471819 -0.731792 2
0.363156 0.791360 3
0.601811 0.519220 2 1
0.601811 -0.200673 1 1
0.075336 0.204355 4 1
0.075336 -0.741558 5 1
0.439969 0.092992 4 1
0.439969 -0.419031 3 1
-0.192510 0.679204 5 1
-0.192510 -0.429043 4 1
0.669920 0.212040 3 1
```

### Output
```
9.7408
```
