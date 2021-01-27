#include <list>
#include <iostream>
#include <vector>
#include"algorithm"
#include"DisjointSets.h"
#include <set>
#include <queue>
#include "Aristas.h"
#define T 15
typedef std::pair<char, char> iPair;
#define INF 0x3f3f3f
using namespace std;
class Grafo {
private:
    int V;
    list< pair <char,char> >* adj;
    vector<Aresta> arestas; // vetor de arestas
public:
    Grafo(int V);
    void addEdge(char u, char v,int peso);
    void dijkstra(char s);
    void primMST();
    void adicionarAresta(int v1, int v2, int peso);
    int buscar(int subset[], int i);
    void unir(int subset[], int v1, int v2);
    void kruskal();
};