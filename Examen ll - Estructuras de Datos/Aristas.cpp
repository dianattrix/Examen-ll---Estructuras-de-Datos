#include "Aristas.h"

Arista::Arista(int v1, int v2, int peso) {
    vertice1 = v1;
    vertice2 = v2;
    this->peso = peso;
}

int Arista::getVertice1() {
    return vertice1;
}
int Arista::getVertice2() {
    return vertice2;
}
int Arista::getPeso(){
    return peso;
}
bool Arista::operator < (const Arista& arista2) const{
    return (peso < arista2.peso);
}