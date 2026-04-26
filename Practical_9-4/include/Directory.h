#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Directory
{
private:
    map<string, vector<string>> dir;

public:
    void addFolder(string name);
    void addFile(string folder, string file);
    void display();
};

#endif
