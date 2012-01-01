#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void)
{
    unsigned long long n, m = 0;
    cin >> n;
    queue<unsigned long long> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
        if (q.back() > m)
            m = q.back();
    }
    vector<unsigned long long> c;
    c.push_back(192);
    for (unsigned long long i = 1; i < m; i++)
    {
        int j;
        for (j = c.back() + 1; j * j * j % 1000 != 888; j++);
        c.push_back(j);
    }
    while (!q.empty())
    {
        cout << c.at(q.front() - 1) << endl;
        q.pop();
    }
}
