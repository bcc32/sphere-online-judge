#include <iostream>
#include <string>
using namespace std;

long long poss(string s)
{
    long long c = 0;
    if (s.size() == 0)
        return 0;
    else if (s[0] == '0')
        return 0;
    else if (s.size() == 1)
        return 1;
    else if (s[0] == '1' || (s[0] == '2' && s[1] >= '0' && s[1] <= '6'))
        c += poss(s.substr(2));
    c += poss(s.substr(1));
    return c;
}

int main(void)
{
    string s;
    for (getline(cin, s); s != "0"; getline(cin, s))
        cout << poss(s) << endl;
}
