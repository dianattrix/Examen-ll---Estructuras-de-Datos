// Examen ll - Estructuras de Datos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Grafo.h"
#include "IGrafo.h"
#include "GrafoDijkstra.h"
#include "GrafoKruskal.h"
#include "GrafoPrim.h"
int main(){
    GrafoDijkstra gD(15);
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
    cout << "---DIJKSTRA---" << endl;
    gD.dijkstra(0);
    
    GrafoKruskal gk(15);
    gk.addEdge(0, 1, 7);
    gk.addEdge(0, 2, 7);
    gk.addEdge(1, 2, 8);
    gk.addEdge(1, 3, 5);
    gk.addEdge(2, 4, 4);
    gk.addEdge(2, 5, 2);
    gk.addEdge(3, 4, 4);
    gk.addEdge(3, 5, 8);
    gk.addEdge(3, 7, 2);
    gk.addEdge(3, 6, 5);
    gk.addEdge(4, 5, 2);
    gk.addEdge(5, 7, 4);
    gk.addEdge(6, 7, 6);
    gk.addEdge(6, 8, 2);
    gk.addEdge(7, 8, 6);
    cout << "---Kruskal---" << endl;
    gk.kruskal();
    
    GrafoPrim gp(15);
    gp.addEdge(0, 1, 7);
    gp.addEdge(0, 2, 7);
    gp.addEdge(1, 2, 8);
    gp.addEdge(1, 3, 5);
    gp.addEdge(2, 4, 4);
    gp.addEdge(2, 5, 2);
    gp.addEdge(3, 4, 4);
    gp.addEdge(3, 5, 8);
    gp.addEdge(3, 7, 2);
    gp.addEdge(3, 6, 5);
    gp.addEdge(4, 5, 2);
    gp.addEdge(5, 7, 4);
    gp.addEdge(6, 7, 6);
    gp.addEdge(6, 8, 2);
    gp.addEdge(7, 8, 6);
    cout << "---Prim---" << endl;
    gp.primMST();
    /*
    Grafo g(15);
    g.addEdge('A', 'B', 7);
    g.addEdge('A', 'C', 7);
    g.addEdge('B', 'C', 8);
    g.addEdge('B', 'D', 5);
    g.addEdge('C', 'E', 4);
    g.addEdge('C', 'F', 2);
    g.addEdge('D', 'E', 4);
    g.addEdge('D', 'F', 8);                     VIEJO
    g.addEdge('D', 'H', 2);
    g.addEdge('D', 'G', 5);
    g.addEdge('E', 'F', 2);
    g.addEdge('F', 'H', 4);
    g.addEdge('G', 'H', 6);
    g.addEdge('G', 'I', 2);
    g.addEdge('H', 'I', 6);
    */
    /*
    Grafo g(15);
    g.adicionarAresta(0, 1, 7);
    g.adicionarAresta(0, 2, 7);
    g.adicionarAresta(1, 2, 8);
    g.adicionarAresta(1, 3, 5);
    g.adicionarAresta(2,4, 4);
    g.adicionarAresta(2, 5, 2);
    g.adicionarAresta(3, 4, 4);
    g.adicionarAresta(3, 5, 8);
    g.adicionarAresta(3, 7, 2);               KRUSKAL
    g.adicionarAresta(3, 6, 5);
    g.adicionarAresta(4, 5, 2);
    g.adicionarAresta(5, 7, 4);
    g.adicionarAresta(6, 7, 6);
    g.adicionarAresta(6, 8, 2);
    g.adicionarAresta(7, 8, 6);
    
   // g.kruskal();
    Grafo g(15);
    g.addEdge(0, 1, 7);
    g.addEdge(0, 2, 7);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 3, 5);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(3, 4, 4);
    g.addEdge(3, 5, 8);
    g.addEdge(3, 7, 2);
    g.addEdge(3, 6, 5);
    g.addEdge(4, 5, 2);
    g.addEdge(5, 7, 4);
    g.addEdge(6, 7, 6);
    g.addEdge(6, 8, 2);
    g.addEdge(7, 8, 6);
   // g.dijkstra(0);
    g.primMST();
   */

}
