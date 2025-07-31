# 🏆 Competitive Programming: The Ultimate Syllabus 🚀

This syllabus is your roadmap to be a skilled problem-solver. Get ready to tackle challenges, master algorithms, and think like a pro. Let's begin the journey!

### MODULE 00: The Foundations 🏁

This module sets the stage, introducing you to the environment, tools, and mindset needed for competitive programming.

#### TOPIC 01: What is Competitive Programming?
  * **Learning Objectives:**
      * Understand the format of competitions (ICPC, IOI, Codeforces, TopCoder, etc.).
      * Learn the problem-solving lifecycle: read, analyze, code, test, and debug.
      * Familiarize yourself with online judge platforms and how to submit solutions.
  * **Materials:**
  ![Click Here!](MODULE_00/01.md)

#### TOPIC 02: Programming Languages
  * **Learning Objectives:**
      * Compare the pros and cons of C++, Java, and Python for competitive programming.
      * Understand why C++ is the most commonly used language due to its performance and rich Standard Template Library (STL).
  * **Materials:**
  ![Click Here!](MODULE_00/02.md)

#### TOPIC 03: C++ for Competitive Programming

  * **Learning Objectives:**
      * Master standard input/output methods, including fast I/O.
      * Utilize the Standard Template Library (STL): `vector`, `string`, `pair`, `map`, `set`, `stack`, `queue`.
      * Learn common C++ headers, especially `<bits/stdc++.h>`.
      * Understand basic syntax, data types, and control structures.
  * **Materials:**

-----

### MODULE 01: Essential Knowledge 🧠

Before diving into complex algorithms, you need a solid foundation in mathematics and complexity analysis.

#### TOPIC 04: Discrete Math and Number Theory

  * **Learning Objectives:**
      * **Number Theory:** Prime factorization, Sieve of Eratosthenes, GCD & LCM (Euclidean algorithm), Modular Arithmetic, and Fermat's Little Theorem.
      * **Combinatorics:** Permutations, combinations, binomial coefficients ($C(n, k)$), and pigeonhole principle.
  * **Materials:**

#### TOPIC 05: Complexity Analysis

  * **Learning Objectives:**
      * Understand **Big O Notation** ($O$), Big Omega ($\\Omega$), and Big Theta ($\\Theta$).
      * Analyze the time and space complexity of algorithms.
      * Estimate the runtime of a solution based on input constraints (e.g., $N \\le 10^5$ suggests an $O(N \\log N)$ or $O(N)$ solution).
  * **Materials:**

-----

### MODULE 02: Core Algorithm Paradigms 💡

Learn the fundamental strategies that form the backbone of countless solutions.

#### TOPIC 06: Greedy Algorithms

  * **Learning Objectives:**
      * Understand the greedy choice property.
      * Solve classic problems like Activity Selection, Fractional Knapsack, and Huffman Coding.
  * **Practice:** Problems involving sorting and making the locally optimal choice.

#### TOPIC 07: Divide and Conquer

  * **Learning Objectives:**
      * Break problems into smaller, independent subproblems.
      * Implement **Binary Search** on monotonic functions.
      * Understand classic D\&C algorithms like Merge Sort and Quick Sort (Comparing to other sorting algorithms).

#### TOPIC 08: Dynamic Programming (DP)

  * **Learning Objectives:**
      * Identify problems with optimal substructure and overlapping subproblems.
      * Master the two approaches: **Memoization (Top-Down)** and **Tabulation (Bottom-Up)**.
      * Solve classic DP problems: 0/1 Knapsack, Longest Common Subsequence (LCS), Edit Distance, and Coin Change.

-----

### MODULE 03: Fundamental Data Structures 🏗️

Efficiently storing and accessing data is key. This module covers the essential tools for the job.

#### TOPIC 09: Arrays and Dynamic Arrays

  * **Learning Objectives:**
      * Understand static arrays vs. dynamic arrays (`std::vector` in C++).
      * Learn prefix sums and difference arrays for fast range operations.

#### TOPIC 10: Linked List

  * **Learning Objectives:**
      * Understand singly and doubly linked lists.
      * Recognize scenarios where linked lists are more suitable than arrays (e.g., frequent insertions/deletions).

#### TOPIC 11: Stack and Queue

  * **Learning Objectives:**
      * Understand LIFO (Last-In, First-Out) for stacks and FIFO (First-In, First-Out) for queues.
      * Implement using `std::stack`, `std::queue`, and `std::deque`.
      * Applications: parenthesis balancing, BFS traversal.

#### TOPIC 12: Priority Queue

  * **Learning Objectives:**
      * Understand the concept of a heap (usually a binary heap).
      * Use `std::priority_queue` for problems requiring access to the min/max element.
      * Applications: Dijkstra's algorithm, Prim's algorithm.

#### TOPIC 13: Hash and Hash Tables

  * **Learning Objectives:**
      * Understand the concept of hashing and collision handling.
      * Use `std::map`, `std::set`, `std::unordered_map`, and `std::unordered_set`.
      * Distinguish between tree-based ($O(\\log N)$) and hash-based ($O(1)$ average) maps/sets.

-----

### MODULE 04: Algorithms on Graphs 🕸️

Graphs are one of the most common and versatile modeling tools in competitive programming.

#### TOPIC 14: Introduction to Graph

  * **Learning Objectives:**
      * Learn graph representations: **Adjacency Matrix** vs. **Adjacency List**.
      * Understand terminology: vertex, edge, directed, undirected, weighted, degree.

#### TOPIC 15: Graph Traversal

  * **Learning Objectives:**
      * Implement **Breadth-First Search (BFS)** for shortest paths in unweighted graphs.
      * Implement **Depth-First Search (DFS)** for exploring paths, finding cycles, and connectivity.

#### TOPIC 16: Directed Acyclic Graph (DAG)

  * **Learning Objectives:**
      * Identify Strongly Connected Components (SCCs).
      * Perform **Topological Sort** using Kahn's algorithm (BFS-based) or DFS.
      * Solve DP problems on DAGs.

#### TOPIC 17: Shortest Path

  * **Learning Objectives:**
      * **Dijkstra's Algorithm:** Single-source shortest path for non-negative weights.
      * **Bellman-Ford Algorithm:** Handles negative weights and detects negative cycles.
      * **Floyd-Warshall Algorithm:** All-pairs shortest path.

#### TOPIC 18: Minimum Spanning Tree (MST)

  * **Learning Objectives:**
      * Find the minimum weight set of edges that connect all vertices.
      * Implement **Kruskal's Algorithm** (Greedy with DSU) and **Prim's Algorithm** (Greedy with Priority Queue).

#### TOPIC 19: Advanced Graph Algorithms

  * **Learning Objectives:**
      * Find Bridges and Articulation Points.
      * Understand Maximum Flow (e.g., Edmonds-Karp algorithm).

-----

### MODULE 05: Algorithms on Strings 📜 (TBA - Future Changes may applied)

String manipulation problems are a category of their own, requiring specialized algorithms.

#### TOPIC 20: Basic String Manipulation & Hashing

  * **Learning Objectives:**
      * Master standard library string functions.
      * Implement **String Hashing (Rabin-Karp)** for efficient substring comparison and searching.

#### TOPIC 21: String Matching

  * **Learning Objectives:**
      * Learn the **Knuth-Morris-Pratt (KMP)** algorithm for linear-time pattern searching.
      * Understand how to build the KMP failure function (LPS array).

#### TOPIC 22: Tries (Prefix Trees)

  * **Learning Objectives:**
      * Implement a Trie data structure.
      * Solve problems related to prefix searching and dictionary lookups.

-----

### MODULE 06: Advanced Topics & Data Structures 🌟 (TBA - Future Changes may applied)

Ready for the next level? These topics appear in harder problems and will set you apart.

#### TOPIC 23: Advanced Data Structures

  * **Learning Objectives:**
      * **Segment Tree:** Handle range queries (sum, min, max) and point updates in $O(\\log N)$.
      * **Fenwick Tree (BIT):** A simpler alternative for range sum/point update problems.
      * **Disjoint Set Union (DSU):** Manages partitions of a set, crucial for Kruskal's and connectivity problems.

#### TOPIC 24: More Algorithm Paradigms

  * **Learning Objectives:**
      * **Bitmasking DP:** Use bitwise operations to represent subsets in DP states.
      * **Computational Geometry:** Handle problems involving points, lines, and polygons (e.g., convex hull).
      * **Game Theory:** Solve impartial games using the Sprague-Grundy theorem (Nim game).
