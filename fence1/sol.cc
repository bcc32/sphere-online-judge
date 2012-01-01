#include <iostream>
#define PI 3.1415926535897
using namespace std;

int main(void)
{
    int l;
    cout.setf(ios_base::fixed);
    cout.precision(2);
    for (cin >> l; l != 0; cin >> l)
        cout << l * l / PI / 2.0 << endl;
}