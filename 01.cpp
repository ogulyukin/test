#include <iostream>
/*Гулюкин О.В.
 * Задание 1. Напишите программу, которая вычисляет сумму целых чисел от а до 500 (значение a
вводится с клавиатуры).*/
using namespace std;
int main() {
    int number01, result;
    cout << "Программа вычисляет сумму целых чисел от введенного до 500" << endl;
    cout << "Введите число : "; cin >> number01;
    if (number01 > 500) {
        cout << "Введенное число больше 500! вычисление выражения невозможно!" << endl;
    }else{
        result = number01;
        for (int count = number01 + 1; count <= 500; count++){
            result += count;
        }
        cout << "Сумма всех целых чисел от " << number01 << " до 500 соствляет : " << result << endl;
    }
    //return 0;
}
