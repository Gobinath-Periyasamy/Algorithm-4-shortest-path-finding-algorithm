# CS6140W-Algorithm-4-Shortest-Path-Finding-algorithm
Implementation of Bellman-Ford and Dijkstra's algorithm for shortest path finding algorithm.


CS6140W - Advanced Data Structures and Algorithms - Programming Assignment 1 - Prim's and Kruskal Algorithm.

Name : Gobinath Periyasamy

Roll Number : CS21M501

Registered Mail id : janu.gobi@gmail.com

Steps to Execute the Program:

1.  To Execute bellman.exe to execute Bellman Ford Algorithm and djikstra_f.exe to run Djikstra Algorithm
2.  The sample i/o for both the Algorithm is given below.
3.  Edges, distance Inputs for testing is given at the last after Sample I/O.


Sample I/O for Bellman Ford Algorithm :

*********************************************

* Name: Gobinath P                          *

* Roll No : CS21M501                        *

* Bellman Ford Algorithm                    *

*********************************************

Enter the Number of Nodes/Vertex : 5

Enter the Number of Edges: 8

Enter source 1 :

0

Enter destinationination 1 :

1

Enter Cost 1 :

-1

Enter source 2 :

0

Enter destinationination 2 :

2

Enter Cost 2 :

4

Enter source 3 :

1

Enter destinationination 3 :

2

Enter Cost 3 :

3

Enter source 4 :

1

Enter destinationination 4 :

3

Enter Cost 4 :

2

Enter source 5 :

1

Enter destinationination 5 :

4

Enter Cost 5 :

2

Enter source 6 :

3

Enter destinationination 6 :

2

Enter Cost 6 :

5

Enter source 7 :

3

Enter destinationination 7 :

1

Enter Cost 7 :

1

Enter source 8 :

4

Enter destinationination 8 :

3

Enter Cost 8 :

-3

Enter the source node : 0


******************************************************************

******************************************************************

Shortest Distance using Bellman Ford Algorithm



From 0 to 0 distance is 0

From 0 to 1 distance is -1

From 0 to 2 distance is 2

From 0 to 3 distance is -2

From 0 to 4 distance is 1

The Time complexity for Bellman Ford Algorithm is  : O((V+E)LogV)

******************************************************************

******************************************************************







Sample I/O for Dijikstra Algorithm exe :

*********************************************

* Name: Gobinath P                          *

* Roll No : CS21M501                        *

* Djikstra Algorithm                        *

*********************************************

Enter the Number of Vertices :

9



Only the Diagonal Elements are enough to get stored

Since the Undirected Graph Weights are Symmeteric



Enter values for row : 0

(0 0) : 0

(0 1) : 4

(0 2) : 0

(0 3) : 0

(0 4) : 0

(0 5) : 0

(0 6) : 0

(0 7) : 8

(0 8) : 0

Enter values for row : 1

(1 1) : 0

(1 2) : 8

(1 3) : 0

(1 4) : 0

(1 5) : 0

(1 6) : 0

(1 7) : 11

(1 8) : 0

Enter values for row : 2

(2 2) : 0

(2 3) : 7

(2 4) : 0

(2 5) : 4

(2 6) : 0

(2 7) : 0

(2 8) : 2

Enter values for row : 3

(3 3) : 0

(3 4) : 9

(3 5) : 14

(3 6) : 0

(3 7) : 0

(3 8) : 0

Enter values for row : 4

(4 4) : 0

(4 5) : 10

(4 6) : 0

(4 7) : 0

(4 8) : 0

Enter values for row : 5

(5 5) : 0

(5 6) : 2

(5 7) : 0

(5 8) : 0

Enter values for row : 6

(6 6) : 0

(6 7) : 1

(6 8) : 6

Enter values for row : 7

(7 7) : 0

(7 8) : 7

Enter values for row : 8

(8 8) : 0





Array Table for Storing Edges' weights :



Destination |  0          1       2       3       4       5       6       7       8

---------------------------------------------------------------------------------

Source Node0 |  0       4       0       0       0       0       0       8       0

Source Node1 |  4       0       8       0       0       0       0       11      0

Source Node2 |  0       8       0       7       0       4       0       0       2

Source Node3 |  0       0       7       0       9       14      0       0       0

Source Node4 |  0       0       0       9       0       10      0       0       0

Source Node5 |  0       0       4       14      10      0       2       0       0

Source Node6 |  0       0       0       0       0       2       0       1       6

Source Node7 |  8       11      0       0       0       0       1       0       7

Source Node8 |  0       0       2       0       0       0       6       7       0

Enter the source Node : 0



******************************************************************

******************************************************************

Shortest Distance using Djikstra Algorithm



Vertex   Distance from Source0

0               0

1               4

2               12

3               19

4               21

5               11

6               9

7               8

8               14

The Time complexity for Bellman Ford Algorithm is  : O((V*V)

******************************************************************

******************************************************************

Press any key to continue . . .





Sample input for Bellman Ford :

0

1

-1

0

2

4

1

2

3

1

3

2

1

4

2

3

2

5

3

1

1

4

3

-3



Sample Input for Djikstra :

0

4

0

0

0

0

0

8

0

0

8

0

0

0

0

11

0

0

7

0

4

0

0

2

0

9

14

0

0

0

0

10

0

0

0

0

2

0

0

0

1

6

0

7

0


