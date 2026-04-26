#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Inventory
{
public:
    void addItem();
    void viewItems();
    void searchItem(string name);
};

#endif
