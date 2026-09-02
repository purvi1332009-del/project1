#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("value of a is:");
    scanf("%d", &a);
    printf("value of b is:");
    scanf("%d", &b);
    printf("value of c is:");
    scanf("%d", &c);
    max = a;
    if (b > a && a > c)
    {
        max = b;
    }
    if (c > a && c > b)
    {
        max = c;
    }
    printf("maximum no. is:\n%d", max);
    return 0;
}