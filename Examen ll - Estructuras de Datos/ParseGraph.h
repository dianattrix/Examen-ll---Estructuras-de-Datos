#pragma once
#include "GrafoDijkstra.h"
#include "GrafoKruskal.h"
#include "GrafoPrim.h"
#include<iostream>
#include<fstream>
#include<string>
#include <sstream>
using namespace std;

class ParseGraph {
private:
  
    GrafoDijkstra* grafo;
    GrafoPrim* grafoPrim;
    GrafoKruskal* grafoKruskal;
    string vertice1, vertice2, peso;
public:
    ParseGraph(int tam);

    ~ParseGraph();

    void buildGraph(string filePath);

    GrafoDijkstra* getGrafoDijkstra();

    GrafoPrim* getGrafoPrim();

    GrafoKruskal* getGrafoKruskal();

};

