#include "GrafoDijkstra.h"


GrafoDijkstra::GrafoDijkstra(int V) {
    this->V = V;
    adj = new list<pair<int, int>>[V];
}

void GrafoDijkstra::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void GrafoDijkstra::dijkstra(int src) {
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