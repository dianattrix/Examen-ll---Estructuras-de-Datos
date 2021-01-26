#pragma once
#include <iostream>
#include <list>
#include <utility>
#include <vector>
#include <queue>
using namespace std;

#define INF 0x3f3f3f3f
typedef pair <int, int>iPair;
class GraphPQ
{
private:
	int x;
	list <pair<int, int>>* adj;
public:
	GraphPQ(int x);
	void addEdge(int u, int v, int w);
	void primMST();
	void print(vector<int> parent, vector<int> key);

};


