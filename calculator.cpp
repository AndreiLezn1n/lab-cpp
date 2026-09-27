#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Введите 1 число: ";
    cin >> a;
    cout << "Введите 2 число: ";
    cin >> b;
    cout << "Введите операцию: ";
    cin >> op;

    double result;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b != 0) result = a / b;
            else { cout << "Ошибка: деление на ноль!" << endl; return 1; }
            break;
        default:
            cout << "Ошибка: неизвестная операция!" << endl;
            return 1;
    }

    cout << "Результат: " << result << endl;
    return 0;
}
