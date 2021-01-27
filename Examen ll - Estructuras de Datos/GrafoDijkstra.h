#pragma once
#include "IGrafo.h"
#include <list>
#include <iostream>
#include <vector>
#include"algorithm"
#include"DisjointSets.h"
#include <set>
#include <queue>
#define T 15
typedef std::pair<int, int> iPair;
#define INF 0x3f3f3f
using namespace std;

class GrafoDijkstra : public IGrafo{
private:
    int V;
    list< pair <int, int> >* adj;
public:
    GrafoDijkstra(int V);
    void addEdge(int u, int v, int peso);
    void dijkstra(int s);
};

