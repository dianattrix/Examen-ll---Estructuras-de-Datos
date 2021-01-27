

#include"ParseGraph.h"

ParseGraph::ParseGraph(int tam)
{
    grafo = new GrafoDijkstra(tam);
    grafoPrim = new GrafoPrim(tam);
    grafoKruskal = new GrafoKruskal(tam);
}

void ParseGraph::buildGraph(string filePath) {
    ifstream file(filePath);

    string vertice1, vertice2, peso;

    while (file.good()) {

        getline(file, vertice1, ',');
        getline(file, vertice2, ',');
        getline(file, peso, '\n');

        int  _vertice1 = atoi(vertice1.c_str());
        int  _vertice2 = atoi(vertice2.c_str());
        int  _peso = atoi(peso.c_str());

        grafo->addEdge(_vertice1, _vertice2, _peso);
        grafoPrim->addEdge(_vertice1, _vertice2, _peso);
        grafoKruskal->addEdge(_vertice1, _vertice2, _peso);

    }
    file.close();
}

ParseGraph::~ParseGraph()
{
    delete grafo;
    delete grafoKruskal;
    delete grafoPrim;
    return;
}

GrafoDijkstra* ParseGraph::getGrafoDijkstra()
{
    return grafo;
}

GrafoPrim* ParseGraph::getGrafoPrim() {
    return grafoPrim;
}

GrafoKruskal* ParseGraph::getGrafoKruskal() {
    return grafoKruskal;
}
