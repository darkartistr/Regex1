#include <string>
#include <regex>
#include <iostream>
using namespace std;

int main()
{
    string data = "aabcda abcd aefga a12a abca aa aaabaaa";

    regex reg("a[a-z]*a");  

    auto pos = data.cbegin();
    auto end = data.cend();
    smatch m;

    for (; regex_search(pos, end, m, reg); pos = m.suffix().first)
    {
        cout << "match: " << m.str() << endl;
    }

    return 0;
}
