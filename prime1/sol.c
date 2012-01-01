#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int _n = 0; _n < n; _n++)
    {
        int l, h, x;
        scanf("%d %d", &l, &h);
        int i = 2, j, c = 0, t, p[100000] = {0};
        while (i <= h) {
            t = 0;
            for (j = 0; j < c; j++) {
                if (!(i % p[j])) {
                    i++;
                    t = 1;
                    break;
                }
                if (p[j] * p[j] > i) {
                    break;
                }
            }
            if (!t) {
                p[c] = i;
                i++;
                c++;
            }
        }
        for (x = 0; x < c; x++)
        {
            if (p[x] >= l)
                printf("%d\n", p[x]);
        }
    }
}
