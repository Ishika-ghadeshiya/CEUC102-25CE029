#include "loan.h"
#include<iostream>
using namespace std;
int loan::loan_id = 1;
loan::loan()
    {
        interest=4.5;
        id = loan_id++;
    }
     void loan::insert_data()
     {
         cout<<"Enter applicant's name\n";
         cin>>name;
         cout<<"Enter loan amount\n";
         cin>>loan_amt;
         cout<<"Enter tenure (in months)";
         cin>>tenure;
         cout<<"Interest rate is:"<<interest<<endl;

         cal_emi();

     }
      void loan::display()
      {
          cout<<"\nLoan ID:"<<id;
          cout<<"\nApplicant:"<<name;
          cout<<"\nTotal Loan Amount:"<<loan_amt;
          cout<<"\nAnnual interest rate:"<<interest;
          cout<<"\nLoan tenure (months):"<<tenure;
          cout<<"\nEMI:"<<emi;
          cout<<endl;

      }
       void loan::cal_emi()
       {
           emi=(loan_amt*interest*pow((1+interest),tenure))/((pow((1+interest),tenure))-1);
       }
