#include <stdio.h>
int main()
{
    int num;
    printf("enter the integer:");
    scanf("%d", &num);
    // if num divided by2 give remindr 0then it's even or else odd
    if (num % 2 == 0)
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }
    return 0;
}