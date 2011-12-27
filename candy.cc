#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> v)
{
    int s = 0;
    for (int i = 0; i < v.size(); i++)
        s += v.at(i);
    return s;
}

int main(void)
{
    int n;
    for (cin >> n; n != -1; cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v.at(i);
        if (sum(v) % n != 0)
            cout << -1 << endl;
        else
        {
            int avg = sum(v) / n;
            int diff = 0;
            for (int i = 0; i < v.size(); i++)
                diff += v.at(i) > avg ? v.at(i) - avg : avg - v.at(i);
            cout << diff / 2 << endl;
        }
    }
}
