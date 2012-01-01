#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v.at(i);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << endl;
}
