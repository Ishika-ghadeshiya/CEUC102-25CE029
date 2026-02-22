#include<iostream>
#include "inventory.h"
using namespace std;
int main()
{
    int n,i,ch,add,itemid,sell;
    int ID;
    char NAME[25];
    float PRICE;
    int Q;
    cout<<"Enter the number of items in the inventory\n";
    cin>>n;
    inventory items[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter Unique item ID\n";
        cin>>ID;
        cout<<"Enter Item name\n";
        cin>>NAME;
        cout<<"Enter Price\n";
        cin>>PRICE;
        cout<<"Enter Quantity in stock\n";
        cin>>Q;
        items[i]=inventory(ID,NAME,PRICE,Q);

    }
    m:cout<<"-------MENU-------\n";
      cout<<" 1.Add stock\n 2.Sell stock\n 3.Display all items\n 4. Exit\n";
      cout<<"Enter your choice\n";
      cin>>ch;
      switch(ch)
      {
      case 1:
        cout<<"Enter the Id of item to be added\n";
        cin>>itemid;
        cout<<"Enter the amount to be added";
        cin>>add;
         for(i=0;i<n;i++)
        {
            if((items[i].add_stock(itemid,add))==1)
            {
                break;
            }

        if(i==n)
        {
            cout<<"Item does not exist\n";
        }
      }
      goto m;
      case 2:

        cout<<"Enter the Id of item to be sold\n";
        cin>>itemid;
        cout<<"Enter the amount to be sold";
        cin>>sell;
         for(i=0;i<n;i++)
        {
            if((items[i].sell_stock(itemid,sell))==1)
            {
                break;
            }
        }
        goto m;
      case 3:
          cout<<" ID     NAME          PRICE       QUANTITY\n";
          for(i=0;i<n;i++)
          {
              items[i].display();
          }
          goto m;
      case 4:
        break;
      }

    return 0;

}
