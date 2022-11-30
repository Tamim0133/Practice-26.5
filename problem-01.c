// You are given two integer x and y. Now you have to find the average of this two integer. Implement this by using
// pointers.
// Sample Input: Sample Output:
// 13 2             7.500
#include <stdio.h>
int main()
{
    float a, b, *p, *q;
    p = &a;
    q = &b;
    scanf("%f %f", p, q);
    printf("%.3f", (*p + *q) / 2);
    return 0;
}