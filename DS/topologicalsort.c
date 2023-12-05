#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

struct Graph 
{
    int V;
    struct Node** adjList;
};

struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int V) 
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->adjList = (struct Node**)malloc(V * sizeof(struct Node*));
    for (int i = 0; i < V; ++i)
    {
        graph->adjList[i] = NULL;
    }
    return graph;
}

void addEdge(struct Graph* graph, int src, int dest) 
{
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;
}

void topologicalSortUtil(int v, struct Graph* graph, int visited[], struct Node** stack) 
{
    visited[v] = 1;
    struct Node* temp = graph->adjList[v];
    while (temp != NULL) 
    {
        int adjVertex = temp->data;
        if (!visited[adjVertex]) 
        {
            topologicalSortUtil(adjVertex, graph, visited, stack);
        }
        temp = temp->next;
    }
    *stack = createNode(v);
    (*stack)->next = temp;
}

void topologicalSort(struct Graph* graph) 
{
    int* visited = (int*)malloc(graph->V * sizeof(int));
    for (int i = 0; i < graph->V; ++i)
    {
        visited[i] = 0;
    }
    struct Node* stack = NULL;
    for (int i = 0; i < graph->V; ++i) 
    {
        if (!visited[i]) 
        {
            topologicalSortUtil(i, graph, visited, &stack);
        }
    }
    printf("Topological Order: ");
    while (stack != NULL) 
    {
        printf("%d ", stack->data);
        struct Node* temp = stack;
        stack = stack->next;
        free(temp);
    }
    free(visited);
}
int main() 
{
    int V, E;
    printf("Enter the number of vertices: ");
    scanf("%d", &V);
    struct Graph* graph = createGraph(V);
    printf("Enter the number of edges: ");
    scanf("%d", &E);
    printf("Enter the edges (source destination):\n");
    for (int i = 0; i < E; ++i) 
    {
        int src, dest;
        scanf("%d %d", &src, &dest);
        addEdge(graph, src, dest);
    }
    topologicalSort(graph);
    return 0;
}
