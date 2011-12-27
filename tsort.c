#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int *values = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &values[i]);
    qsort(values, n, sizeof(int), compare);
    for (int i = 0; i < n; i++)
        printf("%d\n", values[i]);
}
