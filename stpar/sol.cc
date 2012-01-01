#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        queue<int> a, p;
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push(x);
        }
        p.push(0);
        while (!a.empty())
        {
            if (!s.empty())
            {
                if (s.top() == p.back() + 1)
                {
                    p.push(s.top());
                    s.pop();
                    continue;
                }
            }
            if (a.front() == p.back() + 1)
            {
                p.push(a.front());
                a.pop();
            }
            else
            {
                s.push(a.front());
                a.pop();
            }
        }
        while (!s.empty())
            if (s.top() == p.back() + 1)
            {
                p.push(s.top());
                s.pop();
            }
            else
                break;
        if (!s.empty())
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
}
