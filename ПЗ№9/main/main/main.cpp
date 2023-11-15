#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
#include <string>

int main()
{
    setlocale(LC_ALL, "");
    Snack* snack1 = new Snack("name1", 1, 11);
    Snack* snack2 = new Snack("name2", 2, 22);
    SnackSlot* slot1 = new SnackSlot(2);
    SnackSlot* slot2 = new SnackSlot(1);

    slot1->addSnack(snack1);
    slot2->addSnack(snack2);

    VendingMachine* machine = new VendingMachine(4);

    machine->addSlot(slot1);
    machine->addSlot(slot2);

    std::cout << "Пустых слотов в автомате: " << machine->getEmptySlots() << std::endl;

    machine->buySnack("name1");
    machine->buySnack("name2");

    std::cout << "Пустых слотов в автомате: " << machine->getEmptySlots() << std::endl;
    std::cout << "Баланс автомата : " << machine->getAmount() << std::endl;

    delete snack1;
    delete snack2;
    delete machine;
}
