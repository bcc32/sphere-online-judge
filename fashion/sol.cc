#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int _t = 0; _t < t; _t++)
    {
        int n;
        cin >> n;
        vector<int> m(n);
        vector<int> w(n);
        for (int i = 0; i < n; i++)
            cin >> m.at(i);
        for (int i = 0; i < n; i++)
            cin >> w.at(i);
        sort(m.begin(), m.end());
        sort(w.begin(), w.end());
        int s = 0;
        for (int i = 0; i < n; i++)
            s += m.at(i) * w.at(i);
        cout << s << endl;
    }
}
