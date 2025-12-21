# The Magic Forest

## Description
Once upon a time in a faraway land, there was a magic forest full of wondrous creatures and hidden secrets. An adventurer named Maria had heard stories about the magic forest from her grandmother, who was once a great adventurer herself. Eager to follow in her grandmother's footsteps, Maria set out on a journey to explore the forest. As she went deeper and deeper into the forest, Maria came across a beautiful tree she had never seen before. The tree was tall and majestic, with branches reaching high into the sky. Maria approached the tree, admiring its beauty. But as she got closer, Maria noticed something strange. A faint light emanated from the tree trunk, and she heard a soft humming coming from inside. Intrigued, Maria stepped even closer to the tree. Suddenly, a small creature jumped out from behind the tree and startled her! The creature was a tiny fairy, with glittering wings and a mischievous smile. "What are you?" Maria asked in surprise. "I am Tsvetomira, the forest fairy," the creature replied. "And you are entering my forest!". Maria apologized and explained that she was just exploring the forest. Tsvetomira seemed to like Maria and offered to show her around the forest. Excited, Maria accepted eagerly. As they wandered through the forest, Tsvetomira told Maria all sorts of stories about the magical creatures that lived there. Maria listened intently, her imagination running wild with every story. But suddenly Tsvetomira's face became serious. "We must be careful," she said. "There are dangerous creatures in this forest. We must be on guard." Just then they heard rustling in the nearby bushes. Maria froze in terror. Tsvetomira flew into the air, ready to fight any creature that approached. But as the rustling grew louder, they realized that it was not a creature at all, but another adventurer named Ivan, who was exploring the forest alone. Relieved, Maria and Tsvetomira introduced themselves to Ivan. As they talked, Maria mentioned that she was trying to find a way out of the forest. Ivan smiled and said, "I can help with that. I have a map of the forest and I know the fastest way out." Maria was overjoyed. They headed towards the exit, following Ivan's map. But as they walked, they heard a loud roar. Suddenly a huge troll appeared, blocking their path!
Maria, Ivan, and Tsvetomira knew they had to act fast. They remembered a secret path between the trees that bypassed the troll, but they weren't sure how to get there.

Help Maria, Ivan, and Tsvetomira by writing a computer program that uses an algorithm to find the shortest path between the trees from their current location to the secret exit path from the forest.

## Input
From the first line of the standard input, a single integer $N$ is entered, which corresponds to the number of trees (or edges) in the forest.
On the next $N$ lines, two integers $u$ and $v$ are entered, corresponding to a path from tree $u$ to tree $v$, separated by a single space.
On the last line of the standard input, two integers are entered, separated by a single space, which correspond to the starting position (`start`) where our heroes are and the end position (`end`) for the exit from the forest.

## Output
On a single line of the standard output, the program should output a sequence of numbers, separated by a space, which correspond to the shortest path between the trees from their current location to the secret exit path from the forest.

## Example

### Input
```
10
1 2
2 3
2 4
3 5
3 7
3 8
4 6
5 10
7 9
8 4
8 4
```
*(Note: The example input has `8 4` as the start/end at the bottom)*

### Output
```
8 3 2 4
```
