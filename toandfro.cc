#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        string s;
        getline(cin, s);
        getline(cin, s);
        int r = s.size() / n;
        string rect;
        for (int i = 0; i * n < s.size(); i++)
        {
            string sub = s.substr(i * n, n);
            if (i % 2 == 1)
                reverse(sub.begin(), sub.end());
            rect += sub;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j * n < rect.size(); j++)
                cout << rect[j * n + i];
        cout << endl;
    }
}
