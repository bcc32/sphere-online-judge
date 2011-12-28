#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cin.ignore(1, '\n');
        map<string, int> m;
        for (int j = 0; j < n; j++)
        {
            string s;
            getline(cin, s);
            if (m.find(s) == m.end())
                m[s] = 1;
            else
                m[s]++;
        }
        for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
            cout << it->first << it->second << endl;
        if (i < t - 1)
            cout << endl;
    }
}
