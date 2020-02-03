#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> v;

void sort()
{
    for (int i = 31; i >= 0; i--)
    {
        if (i == 31 || i == 26 || i == 21 || i == 16 || i == 11 || i == 2)
            continue;
        vector< vector<string> > a(10);
        for (vector<string>::iterator it = v.begin(); it != v.end(); ++it)
            a[it->at(i) - '0'].push_back(*it);
        v.resize(0);
        for (int j = 0; j < 10; j++)
            for(vector<string>::iterator it = a[j].begin(); it != a[j].end(); ++it)
                v.push_back(*it);
    }
}

void print()
{
    int c = 0;
    string s = "";
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0 && v[i] == v[i - 1])
            c++;
        else
        {
            if (c > 0)
                printf("%s %d\n", s.c_str(), c);
            c = 1;
            s = v[i];
        }
    }
    if (c > 0)
        printf("%s %d\n", s.c_str(), c);
    printf("\n");
}

int main(void)
{
    int t, n;
    scanf("%d", &t);
    for (int _t = 0; _t < t; _t++)
    {
        v.clear();
        scanf("%d", &n);
        v.resize(n);
        cin.ignore(1, '\n');
        for (int i = 0; i < n; i++)
            getline(cin, v[i]);
        sort();
        print();
    }
}
