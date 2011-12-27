#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<int> p(n), i(n);
        for (int j = 0; j < n; j++)
        {
            cin >> p.at(j);
            i.at(p.at(j) - 1) = j + 1;
        }
        if (p == i)
            cout << "ambiguous" << endl;
        else
            cout << "not ambiguous" << endl;
    }
}
