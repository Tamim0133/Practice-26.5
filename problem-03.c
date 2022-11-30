// You have given positive integer N, the size of an array as input. Take an array of size N as input. Now your task to
// print this array. Implement this by using pointers.
// Sample Input:                             Sample Output:
// 5                                        1 2 3 4 5
// 1 2 3 4 5
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    return 0;
}