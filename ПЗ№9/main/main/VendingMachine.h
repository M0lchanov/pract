#pragma once
#include "SnackSlot.h"
class VendingMachine
{
public:
	VendingMachine(int slotCount);

	int getEmptySlots() const;
	int getSlotCount() const;
	int getAmount() const;
	SnackSlot& getMachineSlot(int index) const;

	void addSlot(SnackSlot*& other);
	void setSlotCount(int SlotCount);
	void setAmount(int amount);

	~VendingMachine();

	void buySnack(std::string name);

private:
	int slotCount;
	int iterator;
	int amount;
	SnackSlot* machineSlot;
};

