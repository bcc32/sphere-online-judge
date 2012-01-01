#include <iostream>
#include <string>
using namespace std;

int lcp(string a, string b)
{
    int c;
    for (c = 0; a[c] == b[c] && c < a.size() && c < b.size(); c++);
    return c;
}

int main(void)
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        getline(cin, s); // flush
        getline(cin, s);
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'Q')
            {
                int x, y;
                cin >> x >> y;
                cout << lcp(s.substr(x - 1), s.substr(y - 1)) << endl;
            }
            else if (c == 'R')
            {
                int x;
                char y;
                cin >> x >> y;
                s[x - 1] = y;
            }
            else if (c == 'I')
            {
                int x;
                char y;
                cin >> x >> y;
                s = s.substr(0, x) + y + s.substr(x);
            }
        }
    }
}
