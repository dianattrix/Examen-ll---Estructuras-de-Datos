#include"MachineDetails.h"

MachineDetails::MachineDetails() {
	name = "";
	concreteQuantity = 0;
	gypsumQuantity = 0;
	floorNumber = 0;
	addiQuatity;
}

MachineDetails::MachineDetails(string name, int concreteQuantity, int gypsumQuantity, int floorNumber, int addicional) {
	this->name = name;
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

string MachineDetails::getName() {
	return name;
}

void MachineDetails::setConcreteQuantity(int concreteQuantity) {
	this->concreteQuantity = concreteQuantity;
}

void MachineDetails::setGypsumQuantity(int gypsumQuantity) {
	this->gypsumQuantity = gypsumQuantity;
}

void MachineDetails::setName(string name) {
	this->name = name;
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

