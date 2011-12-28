#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cout << "Ready" << endl;
    string s;
    for (getline(cin, s); s != "  "; getline(cin, s))
    {
        if (s == "pq" || s == "qp" || s == "db" || s == "bd")
            cout << "Mirrored pair" << endl;
        else
            cout << "Ordinary pair" << endl;
    }
}
