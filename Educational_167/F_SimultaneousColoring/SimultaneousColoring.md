F. Simultaneous Coloring
time limit per test
6 seconds
memory limit per test
512 megabytes

You are given a matrix, consisting of n
rows and m

columns.

You can perform two types of actions on it:

    paint the entire column in blue;
    paint the entire row in red. 

Note that you cannot choose which color to paint the row or column.

In one second, you can perform either one action or multiple actions at the same time. If you perform one action, it will be free. If you perform k>1
actions at the same time, it will cost k2

coins. When multiple actions are performed at the same time, for each cell affected by actions of both types, the color can be chosen independently.

You are asked to process q
queries. Before each query, all cells become colorless. Initially, there are no restrictions on the color of any cells. In the i

-th query, a restriction of the following form is added:

    xi yi ci

 — the cell in row xi in column yi should be painted in color ci

    . 

Thus, after i
queries, there are i

restrictions on the required colors of the matrix cells. After each query, output the minimum cost of painting the matrix according to the restrictions.
Input

The first line contains three integers n,m
and q (1≤n,m,q≤2⋅105

) — the size of the matrix and the number of queries.

In the i
-th of the next q lines, two integers xi,yi and a character ci (1≤xi≤n; 1≤yi≤m; ci∈ {'R', 'B'}, where 'R' means red, and 'B' means blue) — description of the i

-th restriction. The cells in all queries are pairwise distinct.
Output

Print q
integers — after each query, output the minimum cost of painting the matrix according to the restrictions.
