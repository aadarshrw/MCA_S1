#include <stdio.h>
#include <stdlib.h>

struct Graph 
{
    int numVertices;
    struct Node** adjacencyList;
};

struct Node 
{
    int vertex;
    struct Node* next;
};

void addEdge(struct Graph* graph, int src, int dest) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = dest;
    newNode->next = graph->adjacencyList[src];
    graph->adjacencyList[src] = newNode;
}

void DFS(struct Graph* graph, int v, int* visited) 
{
    visited[v] = 1;
    printf("%d ", v);
    struct Node* temp;
    for (temp = graph->adjacencyList[v]; temp != NULL; temp = temp->next) 
    {
        if (!visited[temp->vertex]) 
        {
            DFS(graph, temp->vertex, visited);
        }
    }
}

struct Graph* createGraph(int numVertices) 
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;
    graph->adjacencyList = (struct Node**)malloc(sizeof(struct Node*) * numVertices);
    for (int i = 0; i < numVertices; i++) 
    {
        graph->adjacencyList[i] = NULL;
    }
    return graph;
}

int main() 
{
    struct Graph* graph = createGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);
    int visited[4];
    for (int i = 0; i < 4; i++) 
    {
        visited[i] = 0;
    }
    printf("\nFollowing is Depth First Traversal(starting from vertex 2) \n");
    DFS(graph, 2, visited);
    return 0;
}
