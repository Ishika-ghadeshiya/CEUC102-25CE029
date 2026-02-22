#include "inventory.h"
#include<string.h>

inventory::inventory()
{


    id=0;
    strcpy(name, "UNKOWN");
    price=0;
    q=0;

}
inventory::inventory(int ID,char NAME[25],float PRICE,int Q)
    {
    id=ID;
    strcpy(name, NAME);
    price=PRICE;
    q=Q;
    }
int inventory::add_stock(int a,int b)
{
   if(id==a)
    {
    q=q+b;
      return 1;
    }
    else
        return 0;
}
int inventory::sell_stock(int a,int b)
{
   if(id==a)
    {
    q=q-b;
      return 1;
    }
    else
        return 0;

}
void inventory::display()
{
    cout<<id<<"      "<<name<<"          "<<price<<"         "<<q<<"\n";

}
