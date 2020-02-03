#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int num(int min, int n, int k)
{
    if (k == 0)
        return 1;
    else if (n >= v.size())
        return 0;
    else if (v[n] > min)
        return (num(v[n], n + 1, k - 1) + num(min, n + 1, k)) % 5000000;
    else if (n + k >= v.size())
        return 0;
    else
    {
        int i;
        for (i = n; i < v.size() && v[i] <= min; i++);
        return num(min, i, k) % 5000000;
    }
}

int main(void)
{
    int n, k;
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << num(-1, 0, k) << endl;
}
