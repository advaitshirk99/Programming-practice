#include<limits.h>
#include<stdio.h>
#include<stdbool.h>
#define V 9

int v; 

int minDistance(int dist[], int boolSet[]){
    int min = INT_MAX, min_index;
    for(v=0; v<V; v++){
        if(boolSet[v] == false && dist[v] <= min){
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void printSol(int dist[]){
    int i;
    printf("Vertex distance from source:\n");
    for (i = 0; i < V; i++)
        printf("%d \t %d\n", i, dist[i]);
}

void dijsktra(int graph[V][V], int src){
    int dist[V], i, count;
    bool boolSet[V];

    for(i=0; i<V; i++){
        dist[i] = INT_MAX;
        boolSet[i] = false;
    }
    dist[src] = 0;

    for(count=0; count<V-1; count++){
        int u;
        u = minDistance(dist, boolSet);
        boolSet[u] = true;
        for(v=0; v<V; v++){
            if(!boolSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]){
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
    printSol(dist);
}

