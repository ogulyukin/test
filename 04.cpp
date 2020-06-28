/*Гулюкин О.В.
 * Задание 4. Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры:
1 <=a <= 20).*/
#include <iostream>
using namespace std;
int main() {
    int number01, result = 1;
    cout << "Программа посчитает произведение всех целых чисел от введенного Вами до 20." << endl;
    cout << "Ввидите произвольное число целое число до 20 :"; cin >> number01;
    if (number01 >20){
        cout << "Введенное число больше 20, вычисление выражения не возможно!" << endl;
    }else{
        result = number01;
        for(int count = number01 + 1; count <= 20; count++ ){
            result *= count;
        }
        cout << "Произведение целых чисел от " << number01 << " до 20 = " << result;
    }
    return 0;
}
