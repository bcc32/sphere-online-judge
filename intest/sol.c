#include <stdio.h>

int main(void)
{
    long long c = 0;
    long long n, k;
    scanf("%lld %lld", &n, &k);
    for (long long i = 0; i < n; i++)
    {
        long long x;
        scanf("%lld", &x);
        if (x % k == 0)
            c++;
    }
    printf("%lld\n", c);
}
