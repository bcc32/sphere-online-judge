#include <iostream>
#include <vector>
using namespace std;

bool lucky(int n)
{
    int c = 0;
    int o = n;
    for (int i = 2; 2 * i <= o && c < 3; i++)
        if (n % i == 0)
        {
            c++;
            while (n % i == 0)
                n /= i;
        }
    return c >= 3;
}

int main(void)
{
    vector<int> luckies;
    for (int i = 1; luckies.size() < 1000; i++)
        if (lucky(i))
            luckies.push_back(i);
    int t;
    cin >> t;
    for (int _t = 0; _t < t; _t++)
    {
        int n;
        cin >> n;
        cout << luckies.at(n - 1) << endl;
    }
}
