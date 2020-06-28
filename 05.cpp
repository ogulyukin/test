/*Гулюкин О.В.
 * Задание 5. Написать программу, которая выводит на экран таблицу умножения на k, где k –
номер варианта. Например, для 7-го варианта:
7 x 2 = 14
7 x 3 = 21*/
#include <iostream>
using namespace std;
int main() {
    int number,result;
    cout << "Программа выводит таблицу умножения заданного числа." << endl;
    cout << "Введите целое число : "; cin >> number;
    for (int count = 1; count < 10; count++){
        result = number * count;
        cout << number << " * " << count << " = " << result << endl;
    }
    return 0;
}
