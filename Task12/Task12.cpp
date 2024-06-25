#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string data = "<abc> xxx <defg> eee <ik> jsak";

    regex reg("<([^<>]*)>"); 
 

    auto pos = data.cbegin();
    auto end = data.cend();
    smatch m;

    string concatenated_lpss; 

    while (regex_search(pos, end, m, reg)) {
        concatenated_lpss += m[1];  // Добавляем содержимое лпс к результату.
        pos = m.suffix().first;     // Перемещаем позицию начала поиска после найденной подстроки.
    }

    cout << "Concatenated result of all <лпс> substrings: " << concatenated_lpss << endl;

    return 0;
