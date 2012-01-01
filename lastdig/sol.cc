#include <iostream>
using namespace std;

int pow(int a, int b)
{
    int p = 1;
    if (b == 0 && a != 0)
        return 1;
    else if (b == 0 && a == 0)
        return 0;
    a %= 10;
    b %= 4;
    for (int i = 0; i < b; i++)
    {
        p *= a;
        p %= 10;
    }
    return p;
}

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << pow(a, b) << endl;
    }
}
