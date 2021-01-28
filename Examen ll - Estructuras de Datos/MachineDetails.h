#pragma once
#include <iostream>
using namespace std;

class MachineDetails {
private:
	int name1, name2;

	int concreteQuantity;
	int gypsumQuantity;
	int floorNumber;
	float finalWeight;
	int addiQuatity;
public:

	MachineDetails();

	MachineDetails(int name1, int name2, int concreteQuantity, int gypsumQuantity, int floorNumber, int addicional);

	int getFloorNumber();

	void setFloorNumber(int floorNumber);

	int getConcreteQuantity();

	int getGypsumQuantity();

	int getAddiQuatity();

	void setAddiQuatity(int);

	void setConcreteQuantity(int concreteQuantity);

	void setGypsumQuantity(int gypsumQuantity);

	void setName1(int name1);

	void setName2(int name2);

	int getName1();

	int getName2();

	void setFinalWeight();

	float getFinalWeight();

};