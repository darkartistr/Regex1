#include <string>
#include <regex>
#include <iostream>
using namespace std;

int main()
{
    string data = "abba abbba abbbba abbbbbba abca abbda ab abbbbb";

    regex reg("ab{4,}b");

    auto pos = data.cbegin();
    auto end = data.cend();
    smatch m;

    for (; regex_search(pos, end, m, reg); pos = m.suffix().first)
    {
        cout << "match: " << m.str() << endl;
    }

    return 0;
}
