#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        unsigned long long k;
        cin >> k;
        int s = 0;
        for (unsigned long long j = 0; j < k; j++)
        {
            unsigned long long x;
            cin >> x;
            s = (s + x) % k;
        }
        cout << (s == 0 ? "YES" : "NO") << endl;
    }
}
