//
// Created by david on 12/14/2022.
//

#include <iostream>
#include "cart.h"
using namespace std;

void Cart::addItem(Item* pItem) {
    items.insert(pair<string, Item*>(pItem->getName(), pItem));
}

void Cart::deleteItem(string name) {
    items.erase(name);
}

void Cart::displayItems() {
    for (auto & it : items) {
        Item *item = it.second;
        cout << "Price: $"
             << item->getPrice()
             << "  Item: "
             << item->getName()
             << "  Count : "
             << item->getCount()
             << endl;

    }
    cout << endl
         << "Total: $"
         << computeTotal()
         << endl;


}

double Cart::computeTotal() {
    double total = 0;
    for (auto & it : items) {
        total += it.second->computeTotal();
    }

    return total;
}
