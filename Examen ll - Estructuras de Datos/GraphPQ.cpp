#include "GraphPQ.h"

GraphPQ::GraphPQ(int x)
{
	this->x = x;
	adj = new list<iPair>[x];
}

void GraphPQ::addEdge(int u, int v, int w)
{
	adj[u].push_back(make_pair(v, w));
	adj[v].push_back(make_pair(u, w));
}

void GraphPQ::primMST()
{
	priority_queue<iPair, vector<iPair>, greater<iPair>>pq;
	int src = 0;// taking vertex 0 as source
	vector<int> key(x, INF);
	vector<int> parent(x, -1);
	vector <bool>inMST(x, false);
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
	//print(parent, key);
	for (int i = 1; i < x; ++i) {
		cout << parent[i] << endl;
	}
}

void GraphPQ::print(vector<int> parent, vector<int> key)
{
	cout << "Edge \tWeight\n";
	for (int i = 1; i < x; i++)
	{
		//cout << parent[i] << "-" << i << "\t" << graph[i][parent[i]] << "\n";

	}
}
