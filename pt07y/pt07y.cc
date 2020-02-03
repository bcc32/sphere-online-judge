#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <map>
#include <set>
using namespace std;

map< int, vector<int> > edges;

bool tree(int start)
{
    map<int, int> m;
    set< pair<int, int> > s;
    m[start] = 0;
    queue<int> open_list;
    open_list.push(start);
    while (!open_list.empty())
    {
        int curr = open_list.front();
        open_list.pop();
        for (vector<int>::iterator it = edges[curr].begin();
            it != edges[curr].end(); ++it)
        {
            if (s.find(make_pair(curr, *it)) != s.end() ||
                s.find(make_pair(*it, curr)) != s.end())
                continue;
            if (m.find(*it) != m.end())
                return false;
            open_list.push(*it);
            m[*it] = m[curr] + 1;
            s.insert(make_pair(curr, *it));
        }
    }
    return true;
}

int main(void)
{
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    if (tree(1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
