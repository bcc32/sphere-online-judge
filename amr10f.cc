#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    for (int _T = 0; _T < T; _T++)
    {
        int N, A, D;
        cin >> N >> A >> D;
        cout << A * N + (N - 1) * N / 2 * D << endl;
    }
}
