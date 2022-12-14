//
// Created by david on 12/14/2022.
//

#ifndef SHOPPINGCART_CART_H
#define SHOPPINGCART_CART_H

#include <string>
#include <map>
#include "item.h"
using namespace std;


class Cart {
private:
    map<string,Item*> items;
    double total;
public:
    void addItem(Item* pItem);
    void deleteItem(string name);
    void displayItems();
private:
    double computeTotal();
};


#endif //SHOPPINGCART_CART_H
