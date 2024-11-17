#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string phrase;
    
    cout << "Введіть фразу: ";
    getline(cin, phrase);
    
    reverse(phrase.begin(), phrase.end());
    
    cout << "Фраза в зворотному порядку: " << phrase << endl;

    return 0;
}

