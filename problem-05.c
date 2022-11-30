// You have given positive integer N, the size of an array as input. Take an array of size N as input. You have to find the
// sum of those element in array which last digit is zero. Implement this by using function.
// Note - It is guaranteed that each element of an array is at least 2 digit number.
// Sample Input:                   Sample Output:
// 5                               200
// 110 24 50 35 40

#include <stdio.h>
void solve(int arr[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 10 == 0)
            s += arr[i];
    }
    printf("%d", s);
}
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    solve(arr, n);

    return 0;
}