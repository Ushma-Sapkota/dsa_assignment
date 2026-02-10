#Program 5: Implementation of Undirected Graph Using Adjacency Matrix and DFS and BFS Traversal

1. Introduction
An undirected graph is implemented using an adjacency matrix and to traverse the graph using:
- Depth First Search (DFS)
- Breadth First Search (BFS)

2. Data Structure Definition
An adjacency matrix is a 2D array used to represent a graph, where:
- adj[i][j] = 1 indicates an edge between vertex i and vertex j
- adj[i][j] = 0 indicates no edge between vertex i and vertex j

Depth First Search explores a graph by visiting a vertex and then recursively visiting all its adjacent unvisited vertices. It follows a depth wise traversal and uses recursion, which internally works like a stack (LIFO).

Breadth First Search explores a graph level by level. It visits all adjacent vertices of a vertex before moving to the next level. BFS uses a queue (FIFO).

Global Variables
-`adj` stores the adjacency matrix of the graph
-`visited` keeps track of visited vertices
-`n` represents the number of vertices

3.Function Description
a.`DFS(int v)`
-Mark the current vertex as visited
-Print the vertex
-For each adjacent vertex:
-If it is not visited, call DFS recursively

b.`BFS(int start)`
-Insert the starting vertex into the queue
-Mark it as visited
-Dequeue a vertex and print it
-Visit all unvisited adjacent vertices and add them to the queue
-Repeat until the queue is empty

4.`main() function` overview
The main function implements following steps:
a.Read the number of vertices
b.Read the adjacency matrix from the user
c.Initialize the visited array
d.Perform DFS traversal starting from vertex 0
e.Reset the visited array
f.Perform BFS traversal starting from vertex 0

5.Output:
Enter number of vertices: 5
Enter adjacency matrix:
adj[0][0]:0
adj[0][1]:0
adj[0][2]:0 
adj[0][3]:1
adj[0][4]:1
adj[1][0]:0
adj[1][1]:1
adj[1][2]:0
adj[1][3]:1
adj[1][4]:0
adj[2][0]:1
adj[2][1]:0
adj[2][2]:1
adj[2][3]:0
adj[2][4]:1
adj[3][0]:0
adj[3][2]:0
adj[3][3]:1
adj[3][4]:0
adj[4][0]:1
adj[4][1]:0
adj[4][2]:1
adj[4][3]:0
adj[4][4]:1

DFS: 0 3 1 4 2
BFS: 0 3 4 1 2
