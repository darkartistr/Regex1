#include <string>
#include <regex>
#include <iostream>
using namespace std;

int main()
{
    string data = "a1a a2a a34a a5a abca a6a a7a a89a";

    regex reg("a\\d{1}a");

    auto pos = data.cbegin();
    auto end = data.cend();
    smatch m;

    for (; regex_search(pos, end, m, reg); pos = m.suffix().first)
    {
        cout << "match: " << m.str() << endl;
    }

    return 0;
}
