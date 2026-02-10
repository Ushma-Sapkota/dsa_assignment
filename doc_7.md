Program 7: Dijkstra’s Algorithm Implementation in C

1. Introduction
Dijkstra’s algorithm is implemented to find the shortest path from a given source vertex to all other vertices in a weighted graph using an adjacency matrix.

2. Data Structure Definitions
Dijkstra's algorithm is a greedy algorithm that finds the shortest path from a single source node to all other nodes in a weighted graph with non-negative edge weights. It iteratively selects the unvisited node with the smallest tentative distance, updates its neighbors' distances (relaxation), and marks the node as visited. 

a. `Cost Matrix (cost[10][10])`
Represents the weighted graph.
- cost[i][j] stores the weight of the edge from vertex i to vertex j.
- A large value (INF = 999) is used when no direct edge exists.

b. `Distance Array (dist[10])`
- Stores the shortest distance from the source vertex to every other vertex.
- Initially filled with direct distances from the source.

c. `Visited Array (visited[10])`
- Keeps track of visited vertices.
- Helps avoid reprocessing vertices already included in the shortest path tree.


3. Description of Functions
No separate user-defined functions are used; the entire logic is implemented inside `main()` for simplicity.


4. Overview of `main()` function
a. Reads number of vertices.
b. Accepts the cost adjacency matrix.
c. Accepts the source vertex.
d. Initializes:
   - Distance array with source row values.
   - Visited array to zero.
e. Repeatedly:
   - Selects the unvisited vertex with minimum distance.
   - Marks it as visited.
   - Updates distances of its adjacent vertices.
f. Prints the shortest distances from the source to all vertices.


5.Sample Output
Enter number of vertices: 4
Enter cost matrix:
cost[0][0]:0
cost[0][1]:3
cost[0][2]:999
cost[0][3]:7
cost[1][0]:3
cost[1][1]:0
cost[1][2]:1
cost[1][3]:999
cost[2][0]:999
cost[2][1]:1
cost[2][2]:0
cost[2][3]:2
cost[3][0]:7
cost[3][1]:999
cost[3][2]:2
cost[3][3]:0
Enter source vertex: 0
Shortest distances from source 0:
0 -> 0 = 0
0 -> 1 = 3
0 -> 2 = 4
0 -> 3 = 6
