/*Гулюкин О.В.
 * Задание 3. Найти среднее арифметическое всех целых чисел от 1 до 1000.*/
#include <iostream>
using namespace std;
int main() {
    double result = 1;
    for (int count = 2; count <= 1000; count++){
        result += count;
    }
    result = result / 1000;
    cout << "Среднее арифметическое всех чисел от 1 ло 1000 равно : " << result << endl;
    return 0;
}
