#include <iostream>
#include "Graph.h"
using namespace std;


int main() {
    Graph g1("graph.txt");
    cout << "Test cases for possible ways:" << endl;
    cout << "0->1:" << g1.shortestCost(0, 1) << endl;
    cout << "0->2:" << g1.shortestCost(0, 2) << endl;
    cout << "0->3:" << g1.shortestCost(0, 3) << endl;
    cout << "0->4:" << g1.shortestCost(0, 4) << endl;
    cout << "0->5:" << g1.shortestCost(0, 5) << endl;
    cout << "0->6:" << g1.shortestCost(0, 6) << endl;

    cout << "Test cases for not possible ways:" << endl;
    cout << "1->3:" << g1.shortestCost(1, 3) << endl;
    cout << "2->4:" << g1.shortestCost(2, 4) << endl;
    cout << "2->5:" << g1.shortestCost(2, 5) << endl;
    cout << "1->6:" << g1.shortestCost(1, 6) << endl;
}