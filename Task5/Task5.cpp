#include <string>
#include <regex>
#include <iostream>
using namespace std;

int main()
{
    string data = "123 abc2xyz3 abc2def3 2aaa3 2bb3 2+++3 234 2+3";

    regex reg("2\\+*3");

    auto pos = data.cbegin();
    auto end = data.cend();
    smatch m;

    for (; regex_search(pos, end, m, reg); pos = m.suffix().first)
    {
        cout << "match: " << m.str() << endl;
    }

    return 0;
}
