#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string phrase;
    
    cout << "Введіть фразу: ";
    getline(cin, phrase);
    
    phrase.erase(remove(phrase.begin(), phrase.end(), ','), phrase.end());
    
    cout << "Фраза без ком: " << phrase << endl;

    return 0;
}

