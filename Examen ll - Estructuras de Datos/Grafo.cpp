//
// Created by Tere Solano on 18/1/2021.
//
#include "Grafo.h"

Grafo::Grafo(int V) {
    this->V = V;
    adj = new list<pair<int,int>> [V];
}

void Grafo::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
void Grafo::adicionarAresta(int v1, int v2, int peso) {
    Arista aresta(v1, v2, peso);
    aristas.push_back(aresta);
}

void Grafo::dijkstra(int src) {
    priority_queue < iPair, vector<iPair>, greater <iPair> > pq;
    vector <int> dist(V, INF);
    pq.push(make_pair(0, src));
    dist[src] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (auto x : adj[u]) {
            int v = x.first;
            int weight = x.second;
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    cout << "Vertex      Distance from source\n";
    for (int i = 0; i < 9; i++) {
        char v1 = 'A' + i;
        cout << v1 << "\t\t" << dist[i] << endl;
    }
}
/*
void Grafo::primMST() {
    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
    char src = 'A';
    int x = (int)src - 65;
    vector<int> key(V, INF);
    vector<int> parent(V, -1);
    vector <bool>inMST(V, false);
    pq.push(make_pair(0, src - 64));
    key[x] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;
        list<pair<char, char>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            int v = (*i).first - 64;
            int weight = (*i).second;
            if (inMST[v] == false && key[v] > weight) {
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                char g = (char)u + 64;
                char f = (char)v + 64;
                parent[v] = g;
            }
        }
    }
    cout << "Vertex-Weight \n";
    for (int i = 2; i < 10; ++i)
        printf("%c -> \t%d \n", parent[i], key[i]);
}
*/
void Grafo::primMST() {
    priority_queue<iPair, vector<iPair>, greater<iPair> > pq;
    int src = 0;
    vector<int> key(V, INF);
    vector<int> parent(V, -1);
    vector<bool> inMST(V, false);
    pq.push(make_pair(0, src));
    key[src] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;
        list<pair<int, int>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            int v = (*i).first;
            int weight = (*i).second;
            if (inMST[v] == false && key[v] > weight) {
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }
    cout << "Vertex-Weight \n";
    for (int i = 1; i < 9; i++) {
        char v1 = 'A' + parent[i];
        printf("%c -> \t%d \n", v1, key[i]);
    }
}

int Grafo::buscar(int subset[], int i) {
    if (subset[i] == -1)
        return i;
    return buscar(subset, subset[i]);
}

void Grafo::unir(int subset[], int v1, int v2) {
    int v1_set = buscar(subset, v1);
    int v2_set = buscar(subset, v2);
    subset[v1_set] = v2_set;
}
void Grafo::kruskal() {
    vector<Arista> arvore;
    int size_arestas = aristas.size();
    sort(aristas.begin(), aristas.end());
    int* subset = new int[V];
    memset(subset, -1, sizeof(int) * V);

    for (int i = 0; i < size_arestas; i++) {
        int v1 = buscar(subset, aristas[i].getVertice1());
        int v2 = buscar(subset, aristas[i].getVertice2());

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
