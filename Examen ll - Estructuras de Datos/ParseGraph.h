#pragma once

#include "GrafoDijkstra.h"
#include "GrafoKruskal.h"
#include "GrafoPrim.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class ParseGraph {
private:
  
    GrafoDijkstra* grafo;
    GrafoPrim* grafoPrim;
    GrafoKruskal* grafoKruskal;

public:
    ParseGraph(int tam);

    ~ParseGraph();

    void buildGraph(string filePath);

    GrafoDijkstra* getGrafoDijkstra();

    GrafoPrim* getGrafoPrim();

    GrafoKruskal* getGrafoKruskal();
};

