/*Гулюкин О.В.
 * Задание 9. Пользователь с клавиатуры вводит числа. Посчитать их сумму и вывести на экран,
как только пользователь введет ноль.*/
#include <iostream>
using namespace std;
int main() {
    int number,result = 0;
    cout << "Программа будет считать сумму введенных вами чисел." << endl;
    cout << "Для завершения нажмите 0." << endl;
    do{
        cout << "Введите число : "; cin >> number;
        result += number;
        cout << "Сумма чисел = " << result << endl;
    }while( number !=0);
    return 0;
}
