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
    adj = new list<pair<int,int>> [V];
}
void Grafo::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}
void Grafo::addEdgeKruskal(int u, int v, int w)
{
    edges.push_back({ w, {u, v} });
}
void Grafo::printVector(vector<int> vec) {
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); ++it){
        cout<<*it<<"\t";
    }
    cout<<endl;
}
void Grafo::dijkstra(int scr) {
    //crea un set para almacenar los vertices que estan siendo procesados
    set < pair<int,int> > setds;
    //se crea un vector para ñas distancias y las inicializa en infinito
    vector<int> dist(V,INF);
    //inserta scren un set einicializa su distancia en 0
    setds.insert(make_pair(0,scr));
    dist[scr] = 0;
    //ciclo que finaliza cuando todas las distancias mas cortas
    // han sido finalizadas y setds se convierte en vacio
    while (!setds.empty()){
        //el primer set de vertices tiene la minima distancia
        // por tanto se puede extraerdel set
        pair<int,int> tmp = *(setds.begin());
        setds.erase(setds.begin());
        int u= tmp.second;
        list<pair<int,int>>::iterator i;
        for(i = adj[u].begin(); i!= adj[u].end(); ++i){
            int v= (*i).first;
            int weight = (*i).second;
            if(dist[v] > dist[u] + weight){
                if(dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v],v)));
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v],v));
            }
        }
    }
    cout<<"Vertex     Distance from source\n";
    for(int i = 0; i < V; i++)
        cout<< i << "\t\t" <<dist[i] << endl;
}

int Grafo::kruskalMST()
{
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
