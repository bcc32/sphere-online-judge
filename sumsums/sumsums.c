#include <stdio.h>
#include <stdlib.h>

int *v;
int n, t;
long long s;

void next()
{
    for (int i = 0; i < n; i++)
        v[i] = (s - v[i]) % 98765431;
    s = (n - 1) * s % 98765431;
}

int main(void)
{
    scanf("%d%d", &n, &t);
    v = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", v + i);
    s = 0;
    for (int i = 0; i < n; i++)
        s += v[i];
    for (int i = 0; i < t; i++)
        next();
    for (int i = 0; i < n; i++)
        printf("%d\n", v[i]);
    free(v);
}
