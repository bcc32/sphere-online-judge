#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int cost;
    int fun;
} party;

party *m;
party *p;
int b, n;

void foo(int);

int main(void)
{
    while (scanf("%d%d", &b, &n) == 2 && b != 0 && n != 0)
    {
        int i;
        m = (party *)calloc(b + 1, sizeof(party));
        p = (party *)malloc(n * sizeof(party));
        for (i = 0; i < n; i++)
            scanf("%d%d", &p[i].cost, &p[i].fun);
        for (int i = 0; i < n; i++)
            foo(i);
        printf("%d %d\n", m[b].cost, m[b].fun);
    }
}

void foo(int i)
{
    for (int w = 0; w <= b; w++)
        if (p[i].cost <= w)
        {
            // FIXME
            if (m[w].fun < m[w - p[i].cost].fun + p[i].fun)
            {
                m[w].fun = m[w - p[i].cost].fun + p[i].fun;
                m[w].cost = m[w - p[i].cost].cost + p[i].cost;
            }
        }
}
