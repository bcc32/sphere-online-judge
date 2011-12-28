#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        long long b;
        cin >> a >> b;
        a %= 10;
        b %= 4;
        if (a == 0 || a == 1 || a == 5 || a == 6 || b == 1)
            cout << a << endl;
        else if (a == 2)
            if (b == 2)
                cout << 4 << endl;
            else if (b == 3)
                cout << 8 << endl;
            else
                cout << 6 << endl;
        else if (a == 3)
            if (b == 2)
                cout << 9 << endl;
            else if (b == 3)
                cout << 7 << endl;
            else
                cout << 1 << endl;
        else if (a == 4)
            cout << (b % 2 == 0 ? 6 : 4) << endl;
        else if (a == 7)
            if (b == 2)
                cout << 9 << endl;
            else if (b == 3)
                cout << 3 << endl;
            else
                cout << 1 << endl;
        else if (a == 8)
            if (b == 2)
                cout << 4 << endl;
            else if (b == 3)
                cout << 2 << endl;
            else
                cout << 6 << endl;
        else
            cout << (b % 2 == 0 ? 1 : 9) << endl;
    }
}
