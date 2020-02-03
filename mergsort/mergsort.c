#include <stdio.h>
#include <stdlib.h>

int *v;
int n;

void print(int *v, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

void merge(int a, int b, int c)
{
    int *vec = (int *)malloc((c - a) * sizeof(int));
    int m = 0;
    int foo = a, bar = b;
    while (a < bar && b < c)
    {
        if (v[a] <= v[b])
            vec[m++] = v[a++];
        else
            vec[m++] = v[b++];
    }
    while (a < bar)
        vec[m++] = v[a++];
    while (b < c)
        vec[m++] = v[b++];
    //print(v, n);
    for (int i = 0; i < m; i++)
        v[foo + i] = vec[i];
    //print(v, n);
    //print(vec, m);
    free(vec);
}

void merge_sort(int foo, int bar)
{
    //printf("%d\t%d\n", foo, bar);
    if (bar - foo <= 1)
        return;
    merge_sort(foo, (foo + bar) / 2);
    merge_sort((foo + bar) / 2, bar);
    merge(foo, (foo + bar) / 2, bar);
}

int main(void)
{
    v = (int *)malloc(100000 * sizeof(int));
    for (n = 0; scanf("%d", v + n) == 1 && v[n++] > 0; );
    v = realloc(v, n * sizeof(int));
    merge_sort(0, n);
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    free(v);
}
