#include"MachineDetails.h"

MachineDetails::MachineDetails() {
	name1 = 0;
	name2 = 0;
	concreteQuantity = 0;
	gypsumQuantity = 0;
	floorNumber = 0;
	addiQuatity;
}

MachineDetails::MachineDetails(int name1, int name2, int concreteQuantity, int gypsumQuantity, int floorNumber, int addicional) {
	this->name1 = name1;
	this->name2 = name2;
	this->concreteQuantity = concreteQuantity;
	this->gypsumQuantity = gypsumQuantity;
	this->floorNumber = floorNumber;
	this->addiQuatity = addicional;
}
int MachineDetails::getAddiQuatity() {
	return addiQuatity;
}

void MachineDetails::setAddiQuatity(int addi) {
	addiQuatity = addi;
}
int MachineDetails::getFloorNumber()
{
	return floorNumber;
}

void MachineDetails::setFloorNumber(int floorNumber)
{
	this->floorNumber = floorNumber;
}

int MachineDetails::getConcreteQuantity() {
	return concreteQuantity;
}

int MachineDetails::getGypsumQuantity() {
	return gypsumQuantity;
}

void MachineDetails::setConcreteQuantity(int concreteQuantity) {
	this->concreteQuantity = concreteQuantity;
}

void MachineDetails::setGypsumQuantity(int gypsumQuantity) {
	this->gypsumQuantity = gypsumQuantity;
}

void MachineDetails::setName1(int name1)
{
	this->name1 = name1;
}

void MachineDetails::setName2(int name2)
{
	this->name2 = name2;
}

int MachineDetails::getName1()
{
	return name1;
}

int MachineDetails::getName2()
{
	return name2;
}
void MachineDetails::setFinalWeight()
{
	finalWeight = (getGypsumQuantity() * 1.5) + (getConcreteQuantity() * 2.5) +
						(getFloorNumber() * 2.0) + (getAddiQuatity() * 0.5);
}

float MachineDetails::getFinalWeight()
{
	setFinalWeight();
	return finalWeight;
}

