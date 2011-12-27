#include <iostream>
using namespace std;

int main(void)
{
    int x, y, z;
    for (cin >> x, cin >> y, cin >> z; x != 0 || y != 0 || z != 0; 
        cin >> x, cin >> y, cin >> z)
        if (z - y == y - x)
            cout << "AP " << 2 * z - y << endl;
        else
            cout << "GP " << z * z / y << endl;
}
