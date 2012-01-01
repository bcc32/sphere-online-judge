#include <iostream>
#define KGLB 2.2046
#define LBKG 0.4536
#define LG 0.2642
#define GL 3.7854
using namespace std;

int main(void)
{
    cout.setf(ios_base::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double x;
        string u;
        cin >> x >> u;
        cout << i + 1 << " ";
        if (u == "kg")
            cout << x * KGLB << " lb" << endl;
        else if (u == "lb")
            cout << x * LBKG << " kg" << endl;
        else if (u == "l")
            cout << x * LG << " g" << endl;
        else if (u == "g")
            cout << x * GL << " l" << endl;
    }
}
