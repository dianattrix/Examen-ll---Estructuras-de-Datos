
#include"WriteGraph.h"

void WriteGraph::writeGraph(string filePath, vector<MachineDetails> machine)
{
	ofstream file;
	file.open(filePath);
	for (int i = 0; i < machine.size(); i++) {
		file << machine.at(i).getName1() << ",";
		file << machine.at(i).getName2() << ",";
		file << machine.at(i).getFinalWeight() << "\n";
	}
	
	file.close();
}
