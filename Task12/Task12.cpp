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
        concatenated_lpss += m[1];  // ��������� ���������� ��� � ����������.
        pos = m.suffix().first;     // ���������� ������� ������ ������ ����� ��������� ���������.
    }

    cout << "Concatenated result of all <���> substrings: " << concatenated_lpss << endl;

    return 0;
