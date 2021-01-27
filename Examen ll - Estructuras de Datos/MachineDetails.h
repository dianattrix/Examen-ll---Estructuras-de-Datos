#pragma once
#include <iostream>
using namespace std;

class MachineDetails {
private:
	string name;

	int concreteQuantity;
	int gypsumQuantity;
	int floorNumber;
	float finalWeight;
	int addiQuatity;
public:

	MachineDetails();

	MachineDetails(string name, int concreteQuantity, int gypsumQuantity, int floorNumber, int addicional);

	int getFloorNumber();

	void setFloorNumber(int floorNumber);

	int getConcreteQuantity();

	int getGypsumQuantity();

	int getAddiQuatity();

	void setAddiQuatity(int);

	string getName();

	void setConcreteQuantity(int concreteQuantity);

	void setGypsumQuantity(int gypsumQuantity);

	void setName(string name);

	void setFinalWeight();

	float getFinalWeight();

};