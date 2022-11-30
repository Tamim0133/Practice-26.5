#include <stdio.h>
#include <stdlib.h>
int absolute(int a, int b)
{
    if (a > b)
        return a - b;
    else
        return b - a;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;

        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        // for (int i = 0; i < n; i++)
        //     printf("%d ", arr[i]);
        int min = absolute(arr[1], arr[1 - 1]) + absolute(arr[1], arr[1 + 1]);
        for (int i = 1; i < n - 1; i++)
        {
            if (absolute(arr[i], arr[i - 1]) + absolute(arr[i], arr[i + 1]) < min)
            {
                min = absolute(arr[i], arr[i - 1]) + absolute(arr[i], arr[i + 1]);
            }
        }
        printf("%d\n", min);
    }
    return 0;
}