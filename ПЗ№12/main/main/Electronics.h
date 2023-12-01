#pragma once
#include<iostream>
#include<string>

class Electronics
{
public:
	Electronics() = default;
	Electronics(std::string name, int price);
	virtual void getInfo() = 0;

	bool operator == (const Electronics& other) const;


protected:
	std::string name;
	int price;
};