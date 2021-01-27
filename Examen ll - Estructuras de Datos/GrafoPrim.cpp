#include "GrafoPrim.h"

GrafoPrim::GrafoPrim(int V) {
    this->V = V;
    adj = new list<pair<int, int>>[V];
}

void GrafoPrim::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void GrafoPrim::primMST() {
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
