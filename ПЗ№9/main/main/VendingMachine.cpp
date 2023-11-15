#include "VendingMachine.h"
VendingMachine::VendingMachine(int slotCount)
{
	this->slotCount = slotCount;
	machineSlot = new SnackSlot[slotCount];
	iterator = 0;
	amount = 0;
}

VendingMachine::~VendingMachine()
{
	delete[] machineSlot;
}



int VendingMachine::getSlotCount() const
{
	return this->slotCount;
}
SnackSlot& VendingMachine::getMachineSlot(int index) const
{
	return this->machineSlot[index];
}
int VendingMachine::getAmount() const
{
	return this->amount;
}
int VendingMachine::getEmptySlots() const
{
	bool isSlotEmpty = false;

	int count = 0;
	for (int i = 0; i < slotCount; i++)
	{
		for (int j = 0; j < machineSlot[i].getSize(); j++)
		{
			if (machineSlot[i].getSnack(j).getName() == "")
			{
				isSlotEmpty = true;
			}
			else
			{
				isSlotEmpty = false;
				break;
			}
		}
		if (isSlotEmpty)
		{
			count++;
		}
	}
	return count;
}


void VendingMachine::setSlotCount(int slotCount)
{
	this->slotCount = slotCount;
}
void VendingMachine::addSlot(SnackSlot*& other)
{
	if (iterator == slotCount)
	{
		std::cout << "Слоты заполнены" << std::endl;
	}
	else
	{
		machineSlot[iterator] = *other;
		++iterator;
	}
}

void VendingMachine::setAmount(int amount)
{
	this->amount = amount;
}

void VendingMachine::buySnack(std::string name)
{
	for (int i = 0; i < slotCount; i++)
	{
		for (int j = 0; j < machineSlot[i].getSize(); j++)
		{
			if (machineSlot[i].getSnack(j).getName() == name)
			{
				this->amount += machineSlot[i].getSnack(j).getPrice();
				machineSlot[i].getSnack(j).setName("");
				return;
			}
			}
		}
	std::cout << "Такой снэк отсутствует" << std::endl;
	}