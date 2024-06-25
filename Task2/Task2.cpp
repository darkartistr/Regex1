#include <string>
#include <regex>
#include <iostream>
using namespace std;

int main()
{
    string data = "abca abba acca afka acba abc";

    regex reg("a([^b].|b[^c])a");

    auto pos = data.cbegin();
    auto end = data.cend();
    smatch m;

    for (; regex_search(pos, end, m, reg); pos = m.suffix().first)
    {
        cout << "match:  " << m.str() << endl;

    }
}
