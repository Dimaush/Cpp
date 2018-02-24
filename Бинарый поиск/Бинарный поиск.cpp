#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0, "");

    int i = 0;
    int a = 0;
    int b = 10;
    int c = 0;
    int n = 0;
    int ans = 0;
    int mass [10];

    cout << "Введите число, номер которого хотите найти: ";
    cin >> n;
    cout << "Введите числа массива по одному в строке: " << endl;
    for (int i = 0; i < 10; i++) {
        //cout << "[" << i + 1 << "]" << ": ";
        cin >> mass[i];
    }
    while (b - a > 1)
    {
        c = (b + a) / 2;
        if (mass [c] > n) {
            b = c;
        } else {
            a = c;
        }
    }
    if (mass[a] == n) {
        ans = a;
    } else {
        ans = b;
    }
    cout << "Номер элемента равен " << ans + 1 << endl;
    return 0;
}
