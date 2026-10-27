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