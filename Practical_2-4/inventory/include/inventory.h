#ifndef INVENTORY_H
#define INVENTORY_H
#include<iostream>
#include<string>
using namespace std;

class inventory
{
    public:
        inventory();

        int add_stock(int,int);
        int sell_stock(int,int);
        void display();

    inventory(int ID, char NAME[25], float PRICE, int Q);

    protected:

    private:
        int id;
        char name[25];
        float price;
        int q;
};

#endif // INVENTORY_H
