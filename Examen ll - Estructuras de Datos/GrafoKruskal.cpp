#include "GrafoKruskal.h"

GrafoKruskal::GrafoKruskal(int V) {
    this->V = V;
    adj = new list<pair<int, int>>[V];
}

void GrafoKruskal::addEdge(int v1, int v2, int peso) {
    Aresta aresta(v1, v2, peso);
    aristas.push_back(aresta);
}

int GrafoKruskal::buscar(int subset[], int i) {
    if (subset[i] == -1)
        return i;
    return buscar(subset, subset[i]);
}

void GrafoKruskal::unir(int subset[], int v1, int v2) {
    int v1_set = buscar(subset, v1);
    int v2_set = buscar(subset, v2);
    subset[v1_set] = v2_set;
}
void GrafoKruskal::kruskal() {
    vector<Aresta> arvore;
    int size_arestas = aristas.size();
    sort(aristas.begin(), aristas.end());
    int* subset = new int[V];
    memset(subset, -1, sizeof(int) * V);

    for (int i = 0; i < size_arestas; i++) {
        int v1 = buscar(subset, aristas[i].obterVertice1());
        int v2 = buscar(subset, aristas[i].obterVertice2());

        if (v1 != v2) {
            arvore.push_back(aristas[i]);
            unir(subset, v1, v2);
        }
    }

    int size_arvore = arvore.size();
    for (int i = 0; i < size_arvore; i++) {
        char v1 = 'A' + arvore[i].obterVertice1();
        char v2 = 'A' + arvore[i].obterVertice2();
        cout << "(" << v1 << ", " << v2 << ") = " << arvore[i].obterPeso() << endl;
    }
}
