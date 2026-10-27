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