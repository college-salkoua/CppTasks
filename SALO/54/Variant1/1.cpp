#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

// Функція для зміни кольору тексту в консолі
void setConsoleTextColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

// Функція для виведення рядка в центрі консолі
void printCentered(const string& text) {
    // Отримуємо розміри консолі
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    int consoleWidth = csbi.dwSize.X;

    // Розрахунок позиції для центрування
    int padding = (consoleWidth - text.length()) / 2;
    
    // Виведення тексту в центрі
    cout << string(padding, ' ') << text << endl;
}

int main() {
    // Текст для виводу
    vector<string> words = {
        "To", "be,", "or", "not", "to", "be,", "that", "is", "the", "question"
    };

    // Кольори для виводу (Windows має 16 стандартних кольорів)
    vector<int> colors = {
        12, 14, 10, 11, 13, 9, 15, 8, 7, 6, 5, 4, 3, 2, 1, 0
    };

    // Виведення тексту в центрі з кольорами
    for (size_t i = 0; i < words.size(); ++i) {
        setConsoleTextColor(colors[i % colors.size()]);
        printCentered(words[i]);
    }

    // Відновлюємо стандартний колір
    setConsoleTextColor(7);  // 7 - стандартний білий колір на чорному фоні

    // Виведення підпису
    printCentered("\\William Shakespeare\\");
    
    return 0;
}

