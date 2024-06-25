#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string data = "Xab23dm175aad";

    regex reg("\\d+");  

    auto pos = data.cbegin();
    auto end = data.cend();
    smatch m;

    int sum = 0;

    while (regex_search(pos, end, m, reg)) {
        string numStr = m.str();
        int num = stoi(numStr);  // Преобразуем строку с числом в int
        sum += num;              // Добавляем число к сумме
        pos = m.suffix().first;  // Перемещаем позицию начала поиска после найденного числа
    }

    cout << "Sum of all numbers found: " << sum << endl;

    return 0;
}
