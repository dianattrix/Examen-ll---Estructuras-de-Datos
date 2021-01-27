#pragma once
#include<iostream>
using namespace std;

class DisjointSets{
private:
    int* rnk;
    char* parent;
    int n;

public:
    DisjointSets(int n);
    int find(char u);
    void merge(char x, char y);
};