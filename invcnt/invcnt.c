#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *v;
    int t, n;
    scanf("%d", &t);
    for (int _t = 0; _t < t; _t++)
    {
        long long c = 0;
        scanf("%d", &n);
        v = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", v + i);
        for (int i = 1; i < n; i++)
            for (int j = 0; j < i; j++)
                if (v[j] > v[i])
                    c++;
        printf("%d\n", c);
        free(v);
    }
}
