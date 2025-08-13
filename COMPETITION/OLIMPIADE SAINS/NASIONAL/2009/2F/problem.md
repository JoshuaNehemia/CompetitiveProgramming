# Pak Dengklek and the Matrix Game

## Description

This time, Pak Dengklek is playing again with his ducks using a matrix.  
He gives his ducks an **N × M** matrix, followed by a sequence of **rotation** and **reflection** operations.  
The ducks’ task is to perform these operations on the given matrix.  

However, feeling bored with the game, the ducks ask for your help to create a program that prints the matrix after it has undergone the series of rotation and reflection operations.

---

## Input Format

- The first line contains **three integers**:  
  - **N** (1 ≤ N ≤ 100) — the number of rows in the matrix  
  - **M** (1 ≤ M ≤ 100) — the number of columns in the matrix  
  - **X** (1 ≤ X ≤ 100) — the number of operations to be performed  

- The next **N** lines each contain **M integers** — the elements of the matrix.  
  Each element is an integer between **1** and **100** (inclusive).

- The next **X** lines each contain one matrix operation, which can be:

  - `_` — reflect the matrix along the **horizontal axis**  
  - `|` — reflect the matrix along the **vertical axis**  
  - `90` — rotate the matrix **90 degrees clockwise**  
  - `180` — rotate the matrix **180 degrees**  
  - `270` — rotate the matrix **270 degrees clockwise**

---

## Output Format

- The matrix after performing all the given reflection and rotation operations in the given order.

---

## Sample Input 1
```

3 3 2
1 2 3
4 5 6
7 8 9
\_
270

```

## Sample Output 1
```

9 6 3
8 5 2
7 4 1

```

---

## Sample Input 2
```

3 3 2
1 2 3
4 5 6
7 8 9
|
90

```

## Sample Output 2
```

9 6 3
8 5 2
7 4 1

```