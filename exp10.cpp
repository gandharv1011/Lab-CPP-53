#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    // Open file for writing
    fout.open("sample.txt");

    if (!fout) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    // Enter text; type -1 to stop
    while (true) {
        getline(cin, line);

        if (line == "-1")
            break;

        fout << line << endl;
    }

    fout.close();

    // Open file for reading
    ifstream fin;
    fin.open("sample.txt");

    if (!fin) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    // Display file contents
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}