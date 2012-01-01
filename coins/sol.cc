#include <iostream>
#include <vector>
using namespace std;

int sum(int a)
{
    return a / 2 + a / 3 + a / 4;
}

int main(void)
{
    int n;
    for (cin >> n; !cin.eof(); cin >> n)
    {
        vector<int> coins;
        coins.push_back(n);
        while (true)
        {
            bool exchange = false;
            for (vector<int>::iterator it = coins.begin(); it < coins.end();
                it++)
            {
                if (sum(*it) > *it)
                {
                    int t = *it;
                    *it /= 2;
                    coins.push_back(t / 3);
                    coins.push_back(t / 4);
                    exchange = true;
                }
            }
            if (!exchange)
                break;
        }
        int s = 0;
        for (vector<int>::iterator it = coins.begin(); it < coins.end(); it++)
            s += *it;
        cout << s << endl;
    }
}
