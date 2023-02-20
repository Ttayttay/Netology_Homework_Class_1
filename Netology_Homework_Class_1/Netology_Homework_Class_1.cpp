#include <iostream>

using namespace std;

class Calculator {
public:
    // Методы
    double add(double num1, double num2) { return num1 + num2; }
    double multiply(double num1, double num2) { return num1 * num2; }
    double subtract_1_2(double num1, double num2) { return num1 - num2; }
    double subtract_2_1(double num1, double num2) { return num2 - num1; }
    double divide_1_2(double num1, double num2) { return num1 / num2; }
    double divide_2_1(double num1, double num2) { return num2 / num1; }
    
    // Сеттеры
    bool set_num1(double _num1);
    bool set_num2(double _num2);

private:
    double num1, num2;
};

bool Calculator::set_num1(double _num1) {
    if (_num1 != 0) {
        num1 = _num1;
        return true;
    }
    else {
        cout << "Неверный ввод!\n";
        return false;
    }
}

bool Calculator::set_num2(double _num2) {
    if (_num2 != 0) {
        num2 = _num2;
        return true;
    }
    else {
        cout << "Неверный ввод!\n";
        return false;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    while (true) {
        Calculator calc;
        double a, b;
        bool check = false;
        while (check != true) {
            cout << "Введите num1: ";
            cin >> a;
            check = calc.set_num1(a);
        }
        check = false;
        while (check != true) {
            cout << "Введите num2: ";
            cin >> b;
            check = calc.set_num2(b);
        }
        cout << "num1 + num2 = " << calc.add(a, b) << endl;
        cout << "num1 * num2 = " << calc.multiply(a, b) << endl;
        cout << "num1 - num2 = " << calc.subtract_1_2(a, b) << endl;
        cout << "num2 - num1 = " << calc.subtract_2_1(a, b) << endl;
        cout << "num1 / num2 = " << calc.divide_1_2(a, b) << endl;
        cout << "num2 / num1 = " << calc.divide_2_1(a, b) << endl;
    }
}