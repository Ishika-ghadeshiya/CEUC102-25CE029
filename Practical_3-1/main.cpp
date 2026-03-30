#include <iostream>
#include "empsalary.h"
using namespace std;

int main()
{
  
    empsalary* s;
    empsalary* eh = NULL;
empsalary* p;
    int ch;
   m:cout<<"1.Insert data\n2.display data\n3.exit\n";
     cout<<"Enter your choice: \n";
     cin>>ch;
  switch(ch)
  {
  case 1:
      int c;
    cout<<"1.insert data for normal employee\n2.insert data for outperforming employee\n";
    cin>>c;





    if(c==1)
        {
            s=new empsalary();
        }

        else if(c==2)
        {
            int x;
            cout<<"Enter bonus:\n";
            cin>>x;

            s=new empsalary(x);
        }

        s->insert_data();

        if(eh==NULL)
        {
            eh=s;
        }
        else
        {
            s->next=eh;
            eh=s;
        }

        goto m;


    case 2:

        if(eh==NULL)
        {
            cout<<"NO EMPLOYEES FOUND\n";
        }

        else
        {
            p=eh;

            while(p!=NULL)
            {
                p->display_data();
                p=p->next;
            }
        }

        goto m;
  case 3:
    break;
  default:
    cout<<"INVALID CHOICE\n";

    }

return 0;
    return 0;
}
