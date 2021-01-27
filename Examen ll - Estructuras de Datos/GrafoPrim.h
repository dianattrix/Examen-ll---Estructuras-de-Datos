#pragma once
#include "IGrafo.h"
#include <list>
#include <iostream>
#include <vector>
#include"algorithm"
#include <set>
#include <queue>
#define T 15
typedef std::pair<int, int> iPair;
#define INF 0x3f3f3f
using namespace std;

class GrafoPrim : public IGrafo{
private:
    int V;
    list< pair <int, int> >* adj;
public:
    GrafoPrim(int V);
    void addEdge(int u, int v, int peso);
    void primMST();
};

