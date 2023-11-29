#include "Appliances.h"
Appliances::Appliances(int weight) : _weight(weight)
{

}
void Appliances::ShowSpec()
{
	std::cout <<
		"Weight" << _weight <<
		std::endl;
}