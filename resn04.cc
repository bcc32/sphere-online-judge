#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    for (int _T = 0; _T < T; _T++)
    {
        int N;
        cin >> N;
        int c = 0;
        int *piles = (int *) malloc(N * sizeof(int));
        for (int i = 0; i < N; i++)
        {
            cin >> piles[i];
            c += piles[i] / (i + 1);
        }
        free(piles);
        if (c % 2 == 1)
            cout << "ALICE" << endl;
        else
            cout << "BOB" << endl;
    }
}
