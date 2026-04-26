#ifndef BASE_H
#define BASE_H
class base
{
public:
    base();
    virtual ~base();
};

class Derived : public base
{
private:
    int* data;

public:
    Derived();
    ~Derived();
};

#endif // BASE_H
