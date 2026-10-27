# PZ7
# Практична робота №7: Реалізація черги
**Виконав:** студентка групи 4СОМ, Крамар Анна (Варіант № 4)

## Завдання.
<img width="667" height="398" alt="image" src="https://github.com/user-attachments/assets/8d3d9d4f-63db-449b-bdc3-955c69900358" />



### 💻 Коди програм 1-5:
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> numbers;
    // Додаємо 15 цілих чисел у чергу 
    int arr[] = {12, 55, -4, 80, 33, 5, 102, -10, 48, 60, 25, 15, 75, -2, 51};
    for (int i = 0; i < 15; i++) {
        numbers.push(arr[i]);
    }

    int sum = 0;
    int count = 0;

    while (!numbers.empty()) {
        int x = numbers.front();
        numbers.pop();
        if (x > 0) 
        {
            sum += x;
        }
        if (x > 50) 
        {
            count++;
        }
    }

    cout << "Сума додатних елементів: " << sum << endl;
    cout << "Кількість чисел, більших за 50: " << count << endl;
    return 0;
}
```
---
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> source;
    queue<int> result;

    for (int i = 1; i <= 120; i++) 
    {
        source.push(i);
    }

    while (!source.empty()) 
    {
        int x = source.front();
        source.pop();

        if (x % 5 == 0 || x % 7 == 0) 
        {
            result.push(x);
        }
    }

    cout << "Числа, що діляться на 5 або 7: ";
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;
    return 0;
}
```
---
```cpp
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
```
---
```cpp
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
```
---
```cpp
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
```
### 💻 Результати кодів програм:
<img width="1117" height="587" alt="image" src="https://github.com/user-attachments/assets/8c84bcc9-81ed-4152-a6c8-948233de0404" />
<img width="1512" height="669" alt="image" src="https://github.com/user-attachments/assets/dd83c729-33ce-41c9-895a-36f54f24f286" />
<img width="1116" height="572" alt="image" src="https://github.com/user-attachments/assets/779bc61f-ab2f-4f1f-9491-b2be7ff1ab90" />
<img width="1118" height="614" alt="image" src="https://github.com/user-attachments/assets/ca314edc-112d-4f57-853f-904a355a6a73" />
<img width="1492" height="501" alt="image" src="https://github.com/user-attachments/assets/f733e79b-e767-4b0f-85cf-a304eda872ca" />




### Висновок.
  Під час виконання практичної роботи я успішно реалізувала усі поставлені завдання, всі написані коди працюють коректно. Приклади завдань 1-5 у файлі були орієнтиром для мене під час виконання роботи. Оскільки я вже працювала зі стеком, робота з чергою була не занадто важкою для мене.
