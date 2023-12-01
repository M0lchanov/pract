#pragma once
#include "Electronics.h"
class HouseElect : public virtual Electronics
{
public:
	HouseElect(std::string name, int price);
	void getInfo() override;
};