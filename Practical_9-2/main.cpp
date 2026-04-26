#include "WordMap.h"

int main()
{
    WordMap obj;
    string text;

    cout << "Enter a sentence:\n";
    getline(cin, text);

    obj.process(text);

    return 0;
}
