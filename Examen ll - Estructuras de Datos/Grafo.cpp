//
// Created by Tere Solano on 18/1/2021.
//

#include "Grafo.h"
Grafo::Grafo(int V) {
    this->V = V;
    adj = new list<pair<char,char>> [V];
}

void Grafo::addEdge(char u, char v, int w) {
    int i =  (int) u -64;
    int j = (int) v - 64;
    adj[i].push_back(make_pair(v,w));
    adj[j].push_back(make_pair(u,w));
}
void Grafo::dijkstra(char scr) {
    set < pair<char, char> > setds;
    vector<int> dist(V, INF);
    setds.insert(make_pair(0, scr - 64));
    int x = (int)scr - 64;
    dist[x] = 0;
    while (!setds.empty()) {
        pair<char, char> tmp = *(setds.begin());
        setds.erase(setds.begin());
        int u = tmp.second;
        list<pair<char, char>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            int v = (*i).first - 64;
            int weight = (*i).second;
            if (dist[v] > dist[u] + weight) {
                if (dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v], v)));
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v], v));
            }
        }
    }
    cout << "Vertex     Distance from source\n";
    for (int i = 1; i < 10; i++)
        cout << i << "\t\t" << dist[i] << endl;
}
void Grafo::primMST() {
    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
    char src = 'A';
    int x = (int)src - 65;
    vector<int> key(V, INF);
    vector<char> parent(V, -1);
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
void Grafo::adicionarAresta(int v1, int v2, int peso) {
    Aresta aresta(v1, v2, peso);
    arestas.push_back(aresta);
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
    vector<Aresta> arvore;
    int size_arestas = arestas.size();
    sort(arestas.begin(), arestas.end());
    int* subset = new int[V];
    memset(subset, -1, sizeof(int) * V);

    for (int i = 0; i < size_arestas; i++) {
        int v1 = buscar(subset, arestas[i].obterVertice1());
        int v2 = buscar(subset, arestas[i].obterVertice2());

        if (v1 != v2) {
            arvore.push_back(arestas[i]);
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
