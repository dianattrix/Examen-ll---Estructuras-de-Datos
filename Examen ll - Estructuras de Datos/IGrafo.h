#pragma once
#include <iostream>
using namespace std;

class IGrafo{
public:
	virtual void addEdge(int u, int v, int peso) = 0;
	virtual ~IGrafo() = default;
};

