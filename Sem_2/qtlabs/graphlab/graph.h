#ifndef GRAPH_H
#define GRAPH_H

#include<vector>
#include <queue>
#include<iostream>

class Graph{
std::vector<int> vertices{0};
int** Matrix;
int Matrix_size = 1;
public:
    Graph();
    void Add_Vertice();
    void Add_Edge(int,int,int);
    int Get_matrix_size();
    int** Get_matrix();
    std::vector<int> BFS(int);
    std::vector<int> DFS(int);
    std::vector<int> Dijkstra(int, int);
};

#endif // GRAPH_H
