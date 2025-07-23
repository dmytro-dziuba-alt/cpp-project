#include <iostream>
using namespace std;

int main() {
    int n, result = 1;
    cout << "Введіть число: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        result *= i;
    cout << "Факторіал: " << result << endl;
    return 0;
}
