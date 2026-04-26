#include "FileCounter.h"

// Constructor
FileCounter::FileCounter()
{
    charCount = 0;
    wordCount = 0;
    lineCount = 0;
}

// Process file
void FileCounter::processFile(string filename)
{
    ifstream file(filename);

    if (!file)
    {
        cout << "Error: Cannot open file!" << endl;
        return;
    }

    string line;

    while (getline(file, line))
    {
        lineCount++;

        bool inWord = false;

        for (int i = 0; i < line.length(); i++)
        {
            charCount++;

            if (line[i] != ' ' && line[i] != '\t')
            {
                if (!inWord)
                {
                    wordCount++;
                    inWord = true;
                }
            }
            else
            {
                inWord = false;
            }
        }

        // Count newline character (optional, but usually expected)
        charCount++;
    }

    file.close();
}

// Display result
void FileCounter::display()
{
    cout << "\nFile Analysis:\n";
    cout << "Lines: " << lineCount << endl;
    cout << "Words: " << wordCount << endl;
    cout << "Characters: " << charCount << endl;
}
