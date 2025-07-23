#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Введіть число: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Сума чисел від 1 до " << n << " = " << sum << endl;
    return 0;
}
