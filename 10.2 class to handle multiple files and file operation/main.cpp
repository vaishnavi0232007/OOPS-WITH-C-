#include <iostream>
#include <fstream>
using namespace std;

class MultiFile {
public:
    void writeFile() {
        ofstream fout("file1.txt");
        fout << "Welcome to C++ file handling" << endl;
        fout.close();
    }
    void readFile() {
        ifstream fin("file1.txt");
        string word;

        cout << "Reading file1.txt:" << endl;
        while (fin >> word) {
            cout << word << " ";
        }
        cout << endl;
        fin.close();
    }

    void copyFile() {
        ifstream fin("file1.txt");
        ofstream fout("file2.txt");
        string word;

        while (fin >> word) {
            fout << word << " ";
        }

        fin.close();
        fout.close();
        cout << "Data copied to file2.txt" << endl;
    }
};

int main() {
    MultiFile m;
    m.writeFile();
    m.readFile();
    m.copyFile();
    return 0;
}
