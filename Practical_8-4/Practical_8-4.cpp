#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main() {
    string filename;
    ifstream file;
    while (true) {
        cout << "Enter file name (or type exit): ";
        cin >> filename;
        if (filename == "exit") {
            cout << "Program terminated.\n";
            return 0;
        }
        file.open(filename);
        if (file)
            break;
        cout << "File not found! Try again.\n";
    }
    string line;
    int lineNo = 0;
    while (getline(file, line)) {
        lineNo++;
        stringstream ss(line);
        double num, sum = 0;
        int count = 0;
        bool valid = true;
        while (ss >> num) {
            sum += num;
            count++;
        }
        if (!ss.eof()) {
            valid = false;
        }
        if (valid && count > 0) {
            cout << "Line " << lineNo << " -> Sum = " << sum
                 << ", Avg = " << (sum / count) << endl;
        } else {
            cout << "Line " << lineNo << " is invalid (corrupted data)\n";
        }
    }
    file.close();
    return 0;
}
