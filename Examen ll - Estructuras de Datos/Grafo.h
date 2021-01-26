#include <list>
#include <iostream>
#include <vector>
#include <set>
#define INF 0x3f3f3f
using namespace std;
class Grafo {
private:
    int V;
    list< pair <int,int> >* adj;
public:
    Grafo(int V);
    void addEdge(int u, int v,int w);
    void shortestPath(int s);
    void printVector(vector<int>);
};