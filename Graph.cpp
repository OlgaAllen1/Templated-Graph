#include "Graph.h"
#include <fstream>
#include <stdexcept>
#include <queue>

using std::ifstream;
using namespace std;

Graph::Graph(std::string filename) {
    ifstream input;
    input.open(filename);
    if (!input) {
        throw std::invalid_argument("Could not read file");
    }
   
    input >> numNodes;
    adjList = new list <Pair>[numNodes];
    for (int i = 0; i < numNodes; i++) {
        int value;
        input >> value;
        while (value != -1) {
            adjList[i].push_back(Pair(value));
            input >> value;
        }
    }
}

int Graph::shortestCost(int start, int finish) {
    int* distance = new int[numNodes];
    for (int i = 0; i < numNodes; i++) {
        distance[i] = INT_MAX;
    }
    distance[start] = 0;
    queue<int>bfsQueue;
    bfsQueue.push(start);
    while (!bfsQueue.empty()) {
        int current = bfsQueue.front();
        bfsQueue.pop();
        for (const Pair& neighbor : adjList[current]) {
            int nextNode = neighbor.node;
            //int cost = neighbor.weight;
            if (distance[current]+1<distance[nextNode]) {
                distance[nextNode] = distance[current] + 1;
                bfsQueue.push(nextNode);
            }
        }
    }
    int result = distance[finish];
    delete[] distance;
    return result;
}

