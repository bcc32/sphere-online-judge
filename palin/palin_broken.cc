#include <iostream>
#include <string>
using namespace std;

string incr(string str)
{
    bool done = false;
    for (string::reverse_iterator it = str.rbegin(); it != str.rend(); ++it)
    {
        if (*it < '9')
        {
            ++*it;
            done = true;
            break;
        }
        else
            *it = '0';
    }
    if (done)
        return str;
    else
        return "1" + str;
}

string rev(string str)
{
    return string(str.rbegin(), str.rend());
}

int cmp(string a, string b)
{
    if (a.size() > b.size())
        return 1;
    else if (a.size() < b.size())
        return -1;
    else
        return a.compare(b);
}

int main(void)
{
    int t;
    cin >> t;
    cin.ignore(1, '\n');
    for (int _t = 0; _t < t; _t++)
    {
        string n;
        getline(cin, n);
        if (n.size() % 2 == 0)
        {
            string sub = n.substr(0, n.size() / 2);
            string m = sub;
            m.append(sub.rbegin(), sub.rend());
            while (cmp(m, n) <= 0)
            {
                sub = incr(sub);
                m = sub;
                m.append(sub.rbegin(), sub.rend());
            }
            cout << m << endl;
        }
        else
        {
            string sub = n.substr(0, n.size() / 2);
            string m = sub;
            m.push_back(n[n.size() / 2]);
            m.append(sub.rbegin(), sub.rend());
            while (cmp(m, n) <= 0)
            {
                sub = incr(m.substr(0, n.size() / 2 + 1));
                m = sub;
                m.append(sub.rbegin() + 1, sub.rend());
            }
            cout << m << endl;
        }
    }
}
