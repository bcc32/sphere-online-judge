#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int *v = (int *) malloc(500000 * sizeof(int));
    v[0] = 0;
    for (int x = 2; x <= 500000; x++)
    {
        int j, s = 0;
        for (j = 2; j * j < x; j++)
            if (x % j == 0)
                s += j + x / j;
        if (j * j == n)
            s += j;
        v[x - 1] = s + 1; // 1 is a proper divisor
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << v[x - 1] << endl;
    }
}
