#include "Device.h"

Device::Device(std::string name) : _name(name)
{

}

Device::~Device() = default;

void Device::ShowSpec()
{
	std::cout <<"name" << _name <<std::endl;
}