#include "Player.h"


Player::Player(std::string name, int baterryTime, int trackMaxQuantity) : Device(name), _baterryTime(baterryTime), _trackMaxQuantity(trackMaxQuantity)
{
}

void Player::ShowSpec()
{
	Device::ShowSpec();
	std::cout << "Battery life time" << _baterryTime << "\n" 
		<< "Tracks Maximal quantity" << _trackMaxQuantity << "\n" << std::endl;

}