#include <string>
#include <regex>
#include <iostream>
using namespace std;

int main()
{
    string data = "a1a a2a a34a a5a abca a6a a7a a89a aaa aba a1a2a";

    regex reg("a[^\\d]*a");

    auto pos = data.cbegin();
    auto end = data.cend();
    smatch m;

    for (; regex_search(pos, end, m, reg); pos = m.suffix().first)
    {
        cout << "match: " << m.str() << endl;
    }

    return 0;
}
