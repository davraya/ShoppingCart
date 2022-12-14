//
// Created by david on 12/14/2022.
//

#ifndef SHOPPINGCART_ITEM_H
#define SHOPPINGCART_ITEM_H

#include <string>

using namespace std;
class Item {
private:
    string name;
    double price;
    int count;
public:
    Item(string name, double price, int count);
    void incrementCount(int increment);
    void decreaseCount(int decrement);
    string getName() const;
    double getPrice() const;
    int getCount() const;
    double computeTotal() const;
};


#endif //SHOPPINGCART_ITEM_H
