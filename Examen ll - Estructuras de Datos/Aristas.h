#pragma once
#include <iostream>
#include <vector>
#include <algorithm> 
#include <cstring> 
using namespace std;
class Aresta {
    int vertice1, vertice2, peso;
public:
    Aresta(int v1, int v2, int peso) {
        vertice1 = v1;
        vertice2 = v2;
        this->peso = peso;
    }

    int obterVertice1() {
        return vertice1;
    }

    int obterVertice2()
    {
        return vertice2;
    }

    int obterPeso()
    {
        return peso;
    }

    // sobrescrita do operador "<"
    bool operator < (const Aresta& aresta2) const
    {
        return (peso < aresta2.peso);
    }
};