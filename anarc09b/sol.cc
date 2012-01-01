#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b > a)
        return gcd(b, a);
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

int main(void)
{
    long long a, b;
    for (cin >> a >> b; a != 0 || b != 0; cin >> a >> b)
        cout << lcm(a, b) / gcd(a, b) << endl;
}
