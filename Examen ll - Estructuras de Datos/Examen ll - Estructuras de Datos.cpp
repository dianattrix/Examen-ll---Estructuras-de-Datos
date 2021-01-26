// Examen ll - Estructuras de Datos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Grafo.h"

int main(){
    Grafo g(15);
    g.addEdge('A', 'B', 7);
    g.addEdge('A', 'C', 7);
    g.addEdge('B', 'C', 8);
    g.addEdge('B', 'D', 5);
    g.addEdge('C', 'E', 4);
    g.addEdge('C', 'F', 2);
    g.addEdge('D', 'E', 4);
    g.addEdge('D', 'F', 8);
    g.addEdge('D', 'H', 2);
    g.addEdge('D', 'G', 5);
    g.addEdge('E', 'F', 2);
    g.addEdge('F', 'H', 4);
    g.addEdge('C', 'H', 6);
    g.addEdge('G', 'I', 2);
    g.addEdge('H', 'I', 6);
    g.dijkstra('A');
}
