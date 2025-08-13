# Pak Dengklek's Triangular Duck Pen 
## (OSN 2011 no. 2B)

Pak Dengklek wants to build a new pen for his ducks. For aesthetic reasons, he wants the new pen to be **triangular** in shape.

Fortunately, there are already **N stakes** installed in certain locations in his yard. These stakes are numbered from **1** to **N**. Pak Dengklek's yard can be represented as a **Cartesian coordinate plane**. The *i*-th stake is located at coordinates **(xᵢ, yᵢ)**.

The vertices of the pen must be formed from **three stakes** among the existing ones. Pak Dengklek is confused about which three stakes to choose because there are many possibilities.

## Your Task

Help Pak Dengklek count the number of ways to choose **three stakes** to make the new pen.  
Two ways are considered different if there is at least **one stake** whose location differs between the two ways.

## Input Format

- The first line contains an integer **N**.  
- The next **N** lines each contain two integers **xᵢ** and **yᵢ**, separated by a space, representing the coordinates of the *i*-th stake.

## Output Format

- A single line containing an integer — the number of ways Pak Dengklek can make the new pen.

## Sample Input 1
```

4
-1 4
3 7
3 4
1 9

```

## Sample Output 1
```

4

```

## Sample Input 2
```

2
1 1
2 4

```

## Sample Output 2
```

0

```

## Constraints
- 1 ≤ N ≤ 16  
- -1,000 ≤ xᵢ ≤ 1,000  
- -1,000 ≤ yᵢ ≤ 1,000  
- No two stakes are located at the same position.  
- No three stakes are collinear.


