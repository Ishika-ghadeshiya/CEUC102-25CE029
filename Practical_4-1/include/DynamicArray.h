#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H


class DynamicArray
{
    public:
        DynamicArray();
        ~DynamicArray();

        void insert(int value);
        void remove(int position);
        void display();
    protected:

    private:
        int *arr;
        int s;
};


#endif // DYNAMICARRAY_H
