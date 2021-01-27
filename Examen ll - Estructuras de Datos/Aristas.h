#pragma once
#include <iostream>
#include <vector>
#include <algorithm> 
#include <cstring> 
using namespace std;
class Arista {
    int vertice1, vertice2, peso;
public:
    Arista(int v1, int v2, int peso);
    int getVertice1();
    int getVertice2();
    int getPeso();
    bool operator < (const Arista& arista2) const;
};