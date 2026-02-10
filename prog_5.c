/*Implementation of the undirected graph using the adjacency matrix,
 function that implements the BFS and DFS technique to traverse through the graph.*/ 
 #include<stdio.h>
 #include<stdlib.h>
 #define MAX 10

int adj[MAX][MAX], visited[MAX];
int n;

//Depth first search
void DFS(int v){
    printf("%d ",v);
    visited[v] = 1;
    for (int i = 0; i < n; i++){
        if (adj[v][i] && !visited[i]){
            DFS(i);
        }
    }
}

//Breadth first search
void BFS(int start) {
    int queue[MAX], front = 0, rear = 0;
    visited[start] = 1;
    queue[rear++] = start;

    while (front < rear) {
        int v = queue[front++];
        printf("%d ", v);

        for (int i = 0; i < n; i++){
            if (adj[v][i] && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("adj[%d][%d]:",i,j);
            scanf("%d", &adj[i][j]);
        }
    }
    printf("\nDFS: ");//print order of DFS
    DFS(0);
  

    for (int i = 0; i < n; i++){
         visited[i] = 0;
    }
    printf("\nBFS: ");//print order of BFS
    BFS(0);
    

    return 0;
}
