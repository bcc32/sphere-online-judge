#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int _t = 0; _t < t; _t++)
    {
        int n;
        cin >> n;
        cin.get();
        string s;
        getline(cin, s);
        cout << _t + 1 << " " << s.substr(0, n - 1) << s.substr(n) << endl;
    }
}
