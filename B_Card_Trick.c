#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        long long int sum = 0;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int m;
        scanf("%d", &m);

        int x;
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &x);
            sum += x;
        }

        printf("%d\n", arr[(sum % n)]);
    }
    return 0;
}