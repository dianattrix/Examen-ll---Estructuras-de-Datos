// Examen ll - Estructuras de Datos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Grafo.h"
#include "IGrafo.h"
#include "GrafoDijkstra.h"
#include "GrafoKruskal.h"
#include "GrafoPrim.h"
#include "ParseGraph.h"
int main(){

    ParseGraph g(15);

    g.buildGraph("Graph_Data.txt");

    cout << "Dijkstra: " << endl;
    g.getGrafoDijkstra()->dijkstra(0);
    cout << endl << endl;

    cout << "Kruskal: " << endl;
    g.getGrafoKruskal()->kruskal();
    cout << endl << endl;

    cout << "Prim: " << endl;
    g.getGrafoPrim()->primMST();
    
    g.~ParseGraph();
    return 0;

}
