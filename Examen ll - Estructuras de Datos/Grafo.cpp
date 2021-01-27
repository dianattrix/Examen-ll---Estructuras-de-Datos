//
// Created by Tere Solano on 18/1/2021.
//

#include "Grafo.h"
Grafo::Grafo(int V, int E)
{
    this->V = V;
    this->E = E;
}
Grafo::Grafo(int V) {
    this->V = V;
    adj = new list<pair<char,char>> [V];
  //  adj = new list<iPair>[V];
}

void Grafo::addEdge(char u, char v, int w) {
    int i =  (int) u -64;
    int j = (int) v - 64;
    adj[i].push_back(make_pair(v,w));
    adj[j].push_back(make_pair(u,w));

}
void Grafo::addEdgeKruskal(char u, char v, int w){
    edges.push_back({ w, {u, v} });
}
void Grafo::printVector(vector<int> vec) {
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); ++it){
        cout<<*it<<"\t";
    }
    cout<<endl;
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
                parent[v] = g;
            }
        }
    }
    for (int i = 2; i < 10; ++i)
        printf("%c - %d\n", parent[i], key[i]);
}
/*
void Graph::primMST()
{
    // Create a priority queue to store vertices that 
    // are being preinMST. This is weird syntax in C++. 
    // Refer below link for details of this syntax 
    // http://geeksquiz.com/implement-min-heap-using-stl/ 
    priority_queue< iPair, vector <iPair>, greater<iPair> > pq;

    int src = 0; // Taking vertex 0 as source 

    // Create a vector for keys and initialize all 
    // keys as infinite (INF) 
    vector<int> key(V, INF);
    vector<int> parent(V, -1); 
    vector<bool> inMST(V, false);
    pq.push(make_pair(0, src));
    key[src] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;  
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            int v = (*i).first;
            int weight = (*i).second;
            if (inMST[v] == false && key[v] > weight)  {
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }
    for (int i = 1; i < V; ++i)
        printf("%d - %d\n", parent[i], i);
}*/
int Grafo::kruskalMST(){
    int mst_wt = 0;
    sort(edges.begin(), edges.end());
    DisjointSets ds(V);
    vector<pair<int, iPair>>::iterator it;

    for (it = edges.begin(); it != edges.end(); it++) {
        int u = it->second.first;
        int v = it->second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);
        if (set_u != set_v) {
            cout << u << " - " << v << endl;
            mst_wt += it->first;
            ds.merge(set_u, set_v);
        }
    }
    return mst_wt;
}

/*
void Grafo::print(vector<int> parent, vector<int> key)
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
    {
        //cout << parent[i] << "-" << i << "\t" << graph[i][parent[i]] << "\n";

    }
}
*/
void Grafo::print(vector<char> parent, vector<int> key) {
    cout << "Edge \t Weight\n";
    for (int i = 0; i < V; i++)
        cout << parent[i] << " - " << i << " \t" << key[i] << " \n";
}
