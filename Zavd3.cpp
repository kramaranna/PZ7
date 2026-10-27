#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<char> letters;
    string text = "Привіт 2026 рік! Аудиторія №509.";

    for (int i = 0; i < text.length(); i++) {
        letters.push(text[i]);
    }

    int digit = 0;

    while (!letters.empty()) 
    {
        char ch = letters.front();
        letters.pop();
       // Перевіряємо, чи є символ цифрою 0-9
        if (ch >= '0' && ch <= '9') 
        {
            digit++;
        }
    }
    
    cout << "Рядок: " << text << endl;
    cout << "Кількість цифр у рядку: " << digit << endl;
    return 0;
}