#pragma once
#include"Electronics.h"

class Store
{
public:
	Store();
	~Store();
	void setProduct(Electronics* product);
	void getProductInfo(const Electronics* other);

private:
	Electronics** electronics;
	int capacity;
};
