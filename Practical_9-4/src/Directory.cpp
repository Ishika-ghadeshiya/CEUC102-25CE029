#include "Directory.h"

// Add folder
void Directory::addFolder(string name)
{
    if (dir.find(name) == dir.end())
    {
        dir[name] = vector<string>();
        cout << "Folder added\n";
    }
    else
    {
        cout << "Folder already exists\n";
    }
}

// Add file to folder
void Directory::addFile(string folder, string file)
{
    if (dir.find(folder) != dir.end())
    {
        dir[folder].push_back(file);
        cout << "File added\n";
    }
    else
    {
        cout << "Folder not found\n";
    }
}

// Display directory
void Directory::display()
{
    cout << "\n--- Directory Structure ---\n";

    for (map<string, vector<string>>::iterator it = dir.begin(); it != dir.end(); it++)
    {
        cout << "Folder: " << it->first << endl;

        vector<string> files = it->second;

        for (int i = 0; i < files.size(); i++)
        {
            cout << "  - " << files[i] << endl;
        }
    }
}
