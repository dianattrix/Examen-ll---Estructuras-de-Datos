#pragma once
#include <list>
#include <iostream>
#include <vector>
#include"algorithm"
#include <set>
#include <queue>
#include "Aristas.h"
#include "IGrafo.h"
#define T 15
typedef std::pair<int, int> iPair;
#define INF 0x3f3f3f
using namespace std;

class GrafoKruskal : public IGrafo{
private:
    int V;
    list< pair <int, int> >* adj;
    vector<Aresta> aristas;
public:
    GrafoKruskal(int V);
    void addEdge(int v1, int v2, int peso);
    int buscar(int subset[], int i);
    void unir(int subset[], int v1, int v2);
    void kruskal();
};

