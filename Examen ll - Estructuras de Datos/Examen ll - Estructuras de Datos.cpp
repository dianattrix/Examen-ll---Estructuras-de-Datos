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

    g.buildGraph("C:\\Users\\diana\\Documents\\GitHub\\Examen ll - Estructuras de Datos\\Examen ll - Estructuras de Datos\\Graph_Data.txt");
    //g.getGrafoDijkstra()->dijkstra(0);
    g.getGrafoKruskal()->kruskal();
    //g.getGrafoPrim()->primMST();
    
    cout << endl << endl << endl;

    GrafoKruskal gD(15);
    gD.addEdge(0, 1, 7);
    gD.addEdge(0, 2, 7);
    gD.addEdge(1, 2, 8);
    gD.addEdge(1, 3, 5);
    gD.addEdge(2, 4, 4);
    gD.addEdge(2, 5, 2);
    gD.addEdge(3, 4, 4);
    gD.addEdge(3, 5, 8);
    gD.addEdge(3, 7, 2);
    gD.addEdge(3, 6, 5);
    gD.addEdge(4, 5, 2);
    gD.addEdge(5, 7, 4);
    gD.addEdge(6, 7, 6);
    gD.addEdge(6, 8, 2);
    gD.addEdge(7, 8, 6);


    gD.kruskal();
    return 0;

}
