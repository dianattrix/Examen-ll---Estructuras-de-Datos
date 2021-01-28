#pragma once

#include"MachineDetails.h"
#include<fstream>
#include<iostream>
#include <vector>
using namespace std;

class WriteGraph {

public:

	static void writeGraph(string filePath, vector<MachineDetails> machine);

};