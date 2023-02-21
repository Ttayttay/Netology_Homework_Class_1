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

bool Calculator::set_num1(double num1) {
    if (num1 != 0) {
        this->num1 = num1;
        return true;
    }
    else {
        return false;
    }
}

bool Calculator::set_num2(double num2) {
    if (num2 != 0) {
        this->num2 = num2;
        return true;
    }
    else {
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
            if (check == false) {
                cout << "Неверный ввод!" << endl;
            }
        }
        check = false;
        while (check != true) {
            cout << "Введите num2: ";
            cin >> b;
            check = calc.set_num2(b);
            if (check == false) {
                cout << "Неверный ввод!" << endl;
            }
        }
        cout << "num1 + num2 = " << calc.add(a, b) << endl;
        cout << "num1 * num2 = " << calc.multiply(a, b) << endl;
        cout << "num1 - num2 = " << calc.subtract_1_2(a, b) << endl;
        cout << "num2 - num1 = " << calc.subtract_2_1(a, b) << endl;
        cout << "num1 / num2 = " << calc.divide_1_2(a, b) << endl;
        cout << "num2 / num1 = " << calc.divide_2_1(a, b) << endl;
    }
}