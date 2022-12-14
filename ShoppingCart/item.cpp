//
// Created by david on 12/14/2022.
//

#include "item.h"

Item::Item(string name, double price, int count) {
    this->name = name;
    this->price = price;
    this->count = count;
}

void Item::incrementCount(int increment) {
    count += increment;
}

void Item::decreaseCount(int decrement) {
    count += decrement;
}

string Item::getName() const {
    return name;
}

double Item::getPrice() const {
    return price;
}

double Item::computeTotal() const {
    return count * price;
}

int Item::getCount() const {
    return count;
}




