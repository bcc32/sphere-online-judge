#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>
using namespace std;

typedef pair<int, int> party;

map< pair<int, int>, int> optimals;

int max_fun(vector<party> parties, int index, int budget) {
    if (optimals.find(make_pair(index, budget)) != optimals.end()) {
        return optimals[make_pair(index, budget)];
    } else if (budget < 0) {
        return 0;
    } else if (index < 0) {
        return 0;
    }
    int m1 = max_fun(parties, index - 1, budget);
    int m2 = max_fun(parties, index - 1, budget - parties[index].first) +
        parties[index].second;
    return optimals[make_pair(index, budget)] = max(m1, m2);
}

int main(void) {
    vector<party> parties;
    int budget, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> parties[i].first >> parties[i].second;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= budget; j++) {
            max_fun(parties, i, j);
        }
    }
    cout << max_fun(parties, n - 1, budget) << endl;
}
