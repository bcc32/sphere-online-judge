#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) // XXX REVERSE SORT
{
    return b < a;
}

int main(void)
{
    int n, k, s;
    cin >> n >> k >> s;
    vector<int> boxes(n);
    for (int i = 0; i < n; i++)
        cin >> boxes.at(i);
    sort(boxes.begin(), boxes.end(), cmp);
    int c = 0, sum = 0;
    while (sum < k * s)
        sum += boxes.at(c++);
    cout << c << endl;
}
