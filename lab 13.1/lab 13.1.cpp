// Lab_13_1.cpp
#include <iostream>
#include <cmath>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;
    cout << endl;
    // Вивід заголовка таблиці
    cout << setw(10) << "x" << setw(15) << "f(x)" << setw(15) << "Sum" << setw(20) << "Terms Count" << endl;

    x = x_p;
    while (x <= x_k) {
        sum(); // виклик процедури обчислення суми
        cout << setw(10) << x << setw(15) << exp(x) << setw(15) << s << setw(20) << n << endl;
        x += dx;
    }

    cin.get();
    return 0;
}
