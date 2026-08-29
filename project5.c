#include <stdio.h>
int main()
{
    float a, b, c;
    printf("enter the value of a:");
    scanf("%f", &a);
    printf("enter the value of b:");
    scanf("%f", &b);
    // supposing value of c
    a = c; // storing 'a' into c
    a = b; // assign 'b' to a
    b = c; // giving value of a to b
    printf("enter the value of a:%.2f\n", a);
    printf("enter the value of b:%.2f\n", b);
    return 0;
}