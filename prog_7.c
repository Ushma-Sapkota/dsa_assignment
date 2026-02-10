//Implement Dijkstra’s algorithm to find the shortest path from a source node to all other nodes given a weighted graph

#include <stdio.h>
#include<stdlib.h>

#define INF 999   //large value representing infinity

int main() {
    int n, src;
    int cost[10][10];   // Cost/adjacency matrix
    int dist[10];       // Array to store shortest distances
    int visited[10] = {0}; // Array to track visited vertices

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("cost[%d][%d]:",i,j);
            scanf("%d", &cost[i][j]);
        }
    }

    printf("Enter source vertex: ");
    scanf("%d", &src);

    // Initialize distance array with source row values
    for (int i = 0; i < n; i++) {
        dist[i] = cost[src][i];
    }

    // Mark source as visited
    visited[src] = 1;
    dist[src] = 0;

    // Dijkstra's algorithm
    for (int i = 1; i < n; i++) {
        int min = INF, u = -1;

        // Find the unvisited vertex with minimum distance
        for (int j = 0; j < n; j++) {
            if (!visited[j] && dist[j] < min) {
                min = dist[j];
                u = j;
            }
        }

        // Mark the selected vertex as visited
        visited[u] = 1;

        // Update distances of adjacent vertices
        for (int v = 0; v < n; v++) {
            if (!visited[v] && dist[u] + cost[u][v] < dist[v]) {
                dist[v] = dist[u] + cost[u][v];
            }
        }
    }

    printf("Shortest distances from source %d:\n", src);
    for (int i = 0; i < n; i++) {
        printf("%d -> %d = %d\n", src, i, dist[i]);
    }
    return 0;
}
