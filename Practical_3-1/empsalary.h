#ifndef EMPSALARY_H
#define EMPSALARY_H


class empsalary
{
    public:
        empsalary();
        empsalary(int x);

        empsalary *next;
        void insert_data();
        void display_data();

    protected:

    private:
        char n[25];
        int bs,b,gs;
};

#endif // EMPSALARY_H
