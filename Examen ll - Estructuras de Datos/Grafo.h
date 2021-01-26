#include <list>
#include <iostream>
#include <vector>
#include"algorithm"
#include"DisjointSets.h"
#include <set>

typedef std::pair<int, int> iPair //para kruskal
;
#define INF 0x3f3f3f
using namespace std;
class Grafo {
private:
    int V;
    list< pair <int,int> >* adj;
    int E; //para kruskal
    vector<pair<int, iPair>> edges; //para kruskal

public:
    Grafo(int V, int E); //para kruskal
    Grafo(int V);
    void addEdge(int u, int v,int w);
    void Kruskal();
    void addEdgeKruskal(int u, int v, int w);
    void dijkstra(int s);
    int kruskalMST();
    void printVector(vector<int>);
};