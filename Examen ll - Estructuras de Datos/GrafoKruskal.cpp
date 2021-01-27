#include "GrafoKruskal.h"

GrafoKruskal::GrafoKruskal(int V) {
    this->V = V;
    adj = new list<pair<int, int>>[V];
}

void GrafoKruskal::addEdge(int v1, int v2, int peso) {
    Arista aresta(v1, v2, peso);
    aristas.push_back(aresta);
}

int GrafoKruskal::search(int subset[], int i) {
    if (subset[i] == -1)
        return i;
    return search(subset, subset[i]);
}

void GrafoKruskal::unir(int subset[], int v1, int v2) {
    int v1_set = search(subset, v1);
    int v2_set = search(subset, v2);
    subset[v1_set] = v2_set;
}
void GrafoKruskal::kruskal() {
    vector<Arista> arvore;
    int size_arestas = aristas.size();
    sort(aristas.begin(), aristas.end());
    int* subset = new int[V];
    memset(subset, -1, sizeof(int) * V);

    for (int i = 0; i < size_arestas; i++) {
        int v1 = search(subset, aristas[i].getVertice1());
        int v2 = search(subset, aristas[i].getVertice2());

        if (v1 != v2) {
            arvore.push_back(aristas[i]);
            unir(subset, v1, v2);
        }
    }
    int size_arvore = arvore.size();
    for (int i = 0; i < size_arvore; i++) {
        char v1 = 'A' + arvore[i].getVertice1();
        char v2 = 'A' + arvore[i].getVertice2();
        cout << "(" << v1 << ", " << v2 << ") = " << arvore[i].getPeso() << endl;
    }
}
GrafoKruskal::~GrafoKruskal() {
 
}
