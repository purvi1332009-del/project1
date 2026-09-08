#include <stdio.h>
int main()
{
    int i, n;
    printf("enter the value of i:");
    scanf("%d", &i);
    n = 1;
    for (n = 1; n <= 10; n = n++)
        ;
    {
        i *= n;
        printf("table of no.is:%d\n", i);
    }
    printf("table of no.is:%d\n", i);
    return 0;
}