#pragma once
#include "IGrafo.h"
#include <list>
#include <iostream>
#include"algorithm"
#include <set>
#include <queue>
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
    virtual ~GrafoDijkstra();
};

