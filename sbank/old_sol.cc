#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<string> acc(n);
        set<string> unq;
        cin.ignore(1, '\n');
        for (int j = 0; j < n; j++)
            getline(cin, acc.at(j));
        for (int j = 0; j < n; j++)
            unq.insert(acc.at(j));
        for (set<string>::iterator it = unq.begin(); it != unq.end(); it++)
            cout << *it << count(acc.begin(), acc.end(), *it) << endl;
        if (i < t - 1)
            cout << endl;
    }
}
