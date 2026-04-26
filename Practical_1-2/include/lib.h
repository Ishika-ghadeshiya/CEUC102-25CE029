#ifndef LIB_H
#define LIB_H


class lib
{
private:
    int book_id, copies;
    char title[50], author[50];

public:
    void add_book();
    int issue_book(int);
    int return_book(int);
    void display_all();
};

#endif // LIB_H
