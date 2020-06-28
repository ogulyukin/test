/*Гулюкин О.В.
 * Задание 6. Вывести на экран все числа от нуля до введенного пользователем числа.*/
#include <iostream>
using namespace std;
int main() {
    int number, result = 0;
    cout << "Программа выводи все целые числа от 0 до введенного Вами." << endl;
    cout << "Введите число : "; cin >> number;
    if (number >= 0 ){
        for (int count = 0; count <= number; count++){
            cout << result << endl;
            result += 1;
        }
    }else{
        for (int count = 0; count >= number; count--) {
            cout << result << endl;
            result -= 1;
        }
    }

    return 0;
}
