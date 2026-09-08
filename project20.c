#include <stdio.h>
int main()
{
    int a;
    printf("enter the a");
    scanf("%d", &a);
    if (a == 2)
    {
        printf("number is prime=\n%d", a);
    }
    else if (a % a == 0 && a % 2 != 0)

    {
        printf("the number is prime=\n%d", a);
    }
    else if (a % a == 0 && a % 2 == 0)
    {
        printf("the number is not prime");
    }
    if (a == 1 || a == 0)
    {
        printf("invalid number:enter another number:\n%d", a);
    }
    return 0;
}