#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Task {
    string name;
    int min; 
};

int main() {
    queue<Task> tasks;

    tasks.push({"Резервне копіювання", 15});
    tasks.push({"Антивірусне сканування", 40});
    tasks.push({"Оновлення ПЗ", 25});

  
    while (!tasks.empty()) {
        cout << "Виконання: " << tasks.front().name 
             << " (" << tasks.front().min << " хв.)" << endl;
        tasks.pop();
    }

    char choice;

    // Інтерактивний блок додавання нових завдань (як у прикладі з принтером)
    do {
        cout << "\nДодати нове завдання? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            Task t;

            cout << "Назва завдання: ";
            getline(cin >> ws, t.name);

            cout << "Час виконання (хв): ";
            cin >> t.min;

            if (t.min > 0) {
                tasks.push(t);
                cout << "Завдання додано до черги.\n";
            }

            // Опрацювання новоствореного завдання
            while (!tasks.empty()) {
                cout << "Виконання: " << tasks.front().name 
                     << " (" << tasks.front().min << " хв.)" << endl;
                tasks.pop();
            }
        }

    } while (choice == 'y' || choice == 'Y');

    cout << "Роботу завершено." << endl;

    return 0;
}