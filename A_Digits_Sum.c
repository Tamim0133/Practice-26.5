#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n;
        scanf("%lld", &n);

        n % 10 == 9 ? printf("%lld\n", (n / 10) + 1) : printf("%lld\n", n / 10);
    }
    return 0;
}