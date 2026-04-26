#include "Account.h"

int main()
{
    Savings s(101, 1000, 5.5);
    Current c(201, 2000, 1000);

    s.deposit(500);
    s.withdraw(200);
    s.undo();
    s.display();

    cout << endl;

    c.deposit(1000);
    c.withdraw(2500);
    c.undo();
    c.display();

    return 0;
}
