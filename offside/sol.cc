#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int a, d;
    for (cin >> a >> d; a != 0 || d != 0; cin >> a >> d)
    {
        int min_a = 10000;
        vector<int> def(d);
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            if (x < min_a)
                min_a = x;
        }
        for (int i = 0; i < d; i++)
            cin >> def.at(i);
        sort(def.begin(), def.end());
        if (min_a < def.at(0) || min_a < def.at(1))
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
}
