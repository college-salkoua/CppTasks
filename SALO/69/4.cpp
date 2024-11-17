#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string input;
    
    cout << "Введіть рядок слів: ";
    getline(cin, input);

    stringstream ss(input);
    string word;
    int word_count = 0;

    while (ss >> word) {
        word_count++;
        if (word_count == 2) {
            cout << "Друге слово: " << word << endl;
            break;
        }
    }

    if (word_count < 2) {
        cout << "У рядку менше двох слів." << endl;
    }

    return 0;
}

