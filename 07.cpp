/*Гулюкин О.В.
 * Задание 7. Пользователь вводит две границы диапазона, вывести на экран все числа из этого
диапазона. Предусмотреть, чтобы пользователь мог вводить границы диапазона в произвольном
порядке.
вывести все четные числа из диапазона.
вывести все нечетные числа из диапазона.
вывести все числа, кратные семи.*/
#include <iostream>
using namespace std;
int main() {
    int number01, number02, result;
    cout << "Введите первое число диапазона чисел : "; cin  >> number01;
    cout << "Введите второе число диапазона чисел : "; cin  >> number02;
    if (number02 < number01){
        result = number02;
        number02 = number01;
        number01 = result;
    }

    cout << "Вот все числа диапазона:" << endl;
    for (int count = number01; count <= number02; count++){
        cout << count << endl;
    }
    cout << "Вот все четные числа диапазона:" << endl;
    for (int count = number01; count <= number02; count++){
        if (count%2 == 0) {
            cout << count << endl;
        }
    }
    cout << "Вот все нечетные числа диапазона:" << endl;
    for (int count = number01; count <= number02; count++){
        if (count%2 != 0) {
            cout << count << endl;
        }
    }
    cout << "Вот все числа кратные 7 диапазона:" << endl;
    for (int count = number01; count <= number02; count++){
        if (count%7 == 0) {
            cout << count << endl;
        }
    }

    return 0;
}
