#include "DisjointSets.h"

DisjointSets::DisjointSets(int n){
    this->n = n;
    this->parent = new char[n + 1];
    this->rnk = new int[n + 1];
    for (int i = 0; i <= n; i++){
        rnk[i] = 0;
        parent[i] = i;
    }
}

int DisjointSets::find(char u){
    if (u != parent[u]) {
        parent[u] = find(parent[u]);
    }
    return parent[u];
}

void DisjointSets::merge(char x, char y){
    x = find(x), y = find(y);
    if (rnk[x] > rnk[y]) {
        parent[y] = x;
    }
    else {
        parent[x] = y;
    }
    if (rnk[x] == rnk[y])
    {
        rnk[y]++;
    }
}
