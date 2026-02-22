#ifndef LOAN_H
#define LOAN_H
#include<string.h>
#include<iostream>
#include<math.h>


class loan
{
    public:
        loan();
        void display();
        void insert_data();

   loan(const char* Name, double amt, int month)
    {

        strcpy(name,Name);
        loan_amt=amt;
        tenure=month;
        interest = 4.5;
        cal_emi();
         id = loan_id++;

    }

    private:
        static int loan_id;
        char name[25];
        double loan_amt;
        float interest;
        int tenure, id;
        float emi;
        void cal_emi();

};


#endif // LOAN_H
