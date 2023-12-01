#include <iostream>
#include "HouseElect.h"
#include "PortElect.h"
#include "Store.h"


int main()
{

    Store store;

    HouseElect* houseelect = new HouseElect("name1", 1);
    PortElect* portelect = new PortElect("name2",2);


    store.setProduct(houseelect);
    store.setProduct(portelect);
 


    store.getProductInfo(houseelect);
    store.getProductInfo(portelect);


    delete houseelect;
    delete portelect;
    return 0;
}