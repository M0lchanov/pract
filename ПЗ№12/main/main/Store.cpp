#include "Store.h"

Store::Store()
{
	capacity = 0;
	electronics = new Electronics * [5];

}
void Store::setProduct(Electronics* product)
{
	if (capacity == 5)
	{
		electronics[capacity++] = product;
	}
}

void Store::getProductInfo(const Electronics* other)
{
	for (int i = 0; i < 5; i++)
	{
		if (electronics[i] == other)
		{
			electronics[i]->getInfo();
			return;
		}
	}
	return;
}
Store::~Store()
{
	delete electronics;
	electronics = nullptr;
}