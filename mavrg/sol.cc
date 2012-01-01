#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> v)
{
    int s = 0;
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
        s += *it;
    return s;
}

int main(void)
{
    cout.setf(ios_base::fixed);
    cout.precision(2);
    int n, m;
    cin >> n >> m;
    vector< vector<int> > v(n);
    for (int i = 0; i < n; i++)
    {
        v.at(i).resize(m);
        for (int j = 0; j < m; j++)
            cin >> v.at(i).at(j);
    }
    int max = sum(v.at(0));
    for (int i = 1; i < n; i++)
        if (sum(v.at(i)) > max)
            max = sum(v.at(i));
    cout << (double)max / m << endl;
}
