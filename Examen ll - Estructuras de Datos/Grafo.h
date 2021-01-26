#include <list>
#include <iostream>
#include <vector>
#include"algorithm"
#include"DisjointSets.h"
#include <set>
#include <queue>
typedef std::pair<char, char> iPair //para kruskal
;
#define INF 0x3f3f3f
using namespace std;
class Grafo {
private:
    int V;
    list< pair <char,char> >* adj;
    int E; //para kruskal
    vector<pair<int, iPair>> edges; //para kruskal

public:
    Grafo(int V, int E); //para kruskal
    Grafo(int V);
    void addEdge(char u, char v,int peso);
    void Kruskal();
    void addEdgeKruskal(char u, char v, int peso);
    void dijkstra(char s);
    int kruskalMST();
    void printVector(vector<int>);
    void primMST();
    void print(vector<char> parent, vector<int> key);
};