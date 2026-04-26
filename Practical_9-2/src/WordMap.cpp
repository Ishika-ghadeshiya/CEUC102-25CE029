#include "WordMap.h"

// Convert to lowercase
void toLower(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
}

// Main processing
void WordMap::process(string text)
{
    map<string, int> freq;
    string word = "";

    for (int i = 0; i <= text.length(); i++)
    {
        if (text[i] == ' ' || text[i] == '\0')
        {
            if (word != "")
            {
                toLower(word);
                freq[word]++;
                word = "";
            }
        }
        else
        {
            word += text[i];
        }
    }

    // Display result
    cout << "\nWord Frequencies:\n";
    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }
}
