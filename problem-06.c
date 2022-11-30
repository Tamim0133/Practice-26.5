// We give you a string. In string, every character have decimal value. If the decimal value of character is even then
// make the character in uppercase. Implement this by using function.
// Note - It is guaranteed that input string is always in lowercase.
// Sample Input:                     Sample Output:
// programming                          PRogRammiNg

#include <stdio.h>
#include <string.h>
void solve(char arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        if (arr[i] % 2 == 0)
            arr[i] -= 32;
    }
    printf("%s", arr);
}
int main()
{
    char arr[100];
    scanf("%s", arr);

    int l = strlen(arr);

    solve(arr, l);

    return 0;
}