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

public:

	MachineDetails();

	MachineDetails(string name, int concreteQuantity, int gypsumQuantity, int floorNumber);

	int getFloorNumber();

	void setFloorNumber(int floorNumber);

	int getConcreteQuantity();

	int getGypsumQuantity();

	string getName();

	void setConcreteQuantity(int concreteQuantity);

	void setGypsumQuantity(int gypsumQuantity);

	void setName(string name);

	void setFinalWeight();

	float getFinalWeight();

};