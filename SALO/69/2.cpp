#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    char target = 's';
    int count = 0;

    cout << "Введіть текст: ";
    getline(cin, text);
    
    for (char c : text) {
        if (c == target) {
            count++;
        }
    }

    cout << "Кількість входжень символу 's': " << count << endl;

    return 0;
}

