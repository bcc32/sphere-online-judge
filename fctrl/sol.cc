#include <iostream>
using namespace std;

long long p(int b, int e)
{
    long long a = 1;
    for (int i = 0; i < e; i++)
        a *= b;
    return a;
}

int main(void)
{
    int t;
    cin >> t;
    for (int _t = 0; _t < t; _t++)
    {
        int n;
        cin >> n;
        int s = 0;
        for (int i = 1; i < 13; i++)
            s += n / p(5, i);
        cout << s << endl;
    }
}
