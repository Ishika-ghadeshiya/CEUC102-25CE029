#ifndef ACCOUNT_H
#define ACCOUNT_H


class account
{
    public:
        account();

        static int total_acc;
        void create_acc();;
        int withdraw(long int a);
        int deposit(long int a);
        int transfer(long int a);
        int check(long int a);

    protected:

    private:
        long int acc_no;
        char name[25];
        long int curr_bal;
};

#endif // ACCOUNT_H
