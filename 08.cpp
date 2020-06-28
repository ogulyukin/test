/*Гулюкин О.В.
 * Задание 8. Пользователь вводит две границы диапазона. Посчитать сумму всех чисел
диапазона */
#include <iostream>
using namespace std;
int main() {
    int number01,number02, result;
    cout << "программа выводит сумму всех чисел диапазона" << endl;
    cout << "Введите первое число диапазона : "; cin >> number01;
    cout << "Введите второе число диапазона : "; cin >> number02;
    if (number02 < number01){
        result = number02;
        number02 = number01;
        number01 = result;
    }
    result = number01;
    for (int count = number01 + 1; count <= number02; count++){
        result += count;
    }
    cout << "Сумма всех чисел диапазона = " << result;
    return 0;
}
