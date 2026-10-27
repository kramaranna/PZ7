#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Worker {
    string surname;
    int experience; // стаж у роках
};

int main() {
    queue<Worker> workers;

    // Додаємо відомості про працівників у чергу
    workers.push({"Kramar", 3});
    workers.push({"Shevchenko", 7});
    workers.push({"Melnyk", 6});
    workers.push({"Kovalenko", 2});
    workers.push({"Bondarenko", 10});

    cout << "Працівники зі стажем понад 5 років:\n";

    while (!workers.empty()) {
        Worker w = workers.front();
        workers.pop();

        if (w.experience > 5) {
            cout << w.surname << " — " << w.experience << " років" << endl;
        }
    }

    return 0;
}