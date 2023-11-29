#include <iostream>
#include"Device.h"
#include"Player.h"
#include"Appliances.h"
int main()
{
    Appliances al(1);
    Player pl("name", 1, 11);
    al.ShowSpec();
    pl.ShowSpec();
}