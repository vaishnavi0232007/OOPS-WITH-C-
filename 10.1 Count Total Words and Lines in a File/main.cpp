#include <iostream>
#include <fstream>
using namespace std;

class FileDemo {
public:
    void countWordsAndLines() {
        ifstream file("page1.html");
        string word;
        string line;   // getline ke liye
        int words = 0, lines = 0;

        if (!file) {
            cout << "File not found!" << endl;
            return;
        }

        // Count words
        while (file >> word) {
            words++;
        }

        // Reset file pointer
        file.clear();
        file.seekg(0);

        // Count lines using getline()
        while (getline(file, line)) {
            lines++;
        }

        file.close();

        cout << "Total Words: " << words << endl;
        cout << "Total Lines: " << lines << endl;
    }
};

int main() {
    FileDemo f;
    f.countWordsAndLines();
    return 0;
}
