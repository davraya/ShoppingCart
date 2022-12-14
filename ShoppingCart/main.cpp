#include <iostream>
#include "item.h"
#include "cart.h"
using namespace std;

int main() {
    Cart cart;


    // putting Milk in the cart
    Item milk("Milk", 3.99, 2);
    Item * pMilk = &milk;
    cart.addItem(pMilk);

    // putting Eggs in the cart
    Item eggs("12 Eggs", 6.99, 1);
    Item * pEggs = &eggs;
    cart.addItem(pEggs);

    // putting Bread in the cart
    Item bread("Bread", 1.99, 2);
    Item * pBread = &bread;
    cart.addItem(pBread);

    // putting Bread in the cart
    Item ships("Ships", 1.99, 2);
    Item * pShips = &ships;
    cart.addItem(pShips);

    cart.displayItems();

    // taking the junk food off
    cart.deleteItem("Ships");

    cart.displayItems();

}
