#ifndef ALGDIJKSTRA_GRAPH_H
#define ALGDIJKSTRA_GRAPH_H
#pragma once
#include <list>
#include <string>

struct Pair {

    Pair(int n) {
        node = n;
        
    }
    int node;
   
};

class Graph {
public:
    Graph(std::string);
    int shortestCost(int start, int finish);

private:
    std::list<Pair>* adjList;
    int numNodes;
};


#endif //ALGDIJKSTRA_GRAPH_H
