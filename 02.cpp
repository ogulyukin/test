/*Гулюкин О.В.
 * Задание 2. Напишите программу, которая запрашивает два целых числа x и y, после чего
вычисляет и выводит значение x в степени y.*/
#include <iostream>
using namespace std;
int main() {
    int number01,number02;
    cout << "Программа возведения в степень." << endl;
    cout << "Введите число, которое вы хотите возвести в степень : "; cin >> number01;
    cout << "Введите число, которое будет значением степени : "; cin >> number02;
    if (number02 == 0){
        cout << number01 << " в сепени " << number02 << " =  0 !";
    }else if (number02 > 0){
        int result = 1;
        for(int count = 1; count <= number02; count ++) {
            result *= number01;
        }
        cout << number01 << " в сепени " << number02 << " = " << result;
    }else if (number02 < 0){
        double result = 1;
        for(int count = -1; count >= number02; count --) {
            result *= number01;
        }
        result = 1/result;
        cout << number01 << " в сепени " << number02 << " = " << result;
    }
    return 0;
}
