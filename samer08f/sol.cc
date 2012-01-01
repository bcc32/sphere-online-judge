#include <iostream>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int s = 0;
        for (int i = 1; i <= n; i++)
            s += i * i;
        cout << s << endl;
    }
}
