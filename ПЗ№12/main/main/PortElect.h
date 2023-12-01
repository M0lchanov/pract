#pragma once
#include "Electronics.h"
class PortElect : public virtual Electronics
{
public:
	PortElect(std::string name, int price);
	void getInfo() override;
};