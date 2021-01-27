// Examen ll - Estructuras de Datos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Grafo.h"

int main(){
    /*
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
    g.addEdge('G', 'H', 6);
    g.addEdge('G', 'I', 2);
    g.addEdge('H', 'I', 6);
    */
    Grafo g(15);
    g.adicionarAresta(0, 1, 7);
    g.adicionarAresta(0, 2, 7);
    g.adicionarAresta(1, 2, 8);
    g.adicionarAresta(1, 3, 5);
    g.adicionarAresta(2,4, 4);
    g.adicionarAresta(2, 5, 2);
    g.adicionarAresta(3, 4, 4);
    g.adicionarAresta(3, 5, 8);
    g.adicionarAresta(3, 7, 2);
    g.adicionarAresta(3, 6, 5);
    g.adicionarAresta(4, 5, 2);
    g.adicionarAresta(5, 7, 4);
    g.adicionarAresta(6, 7, 6);
    g.adicionarAresta(6, 8, 2);
    g.adicionarAresta(7, 8, 6);
    g.kruskal(); // roda o algoritmo de Kruskal
 //   g.dijkstra('E');
  //  g.primMST();
   

}
