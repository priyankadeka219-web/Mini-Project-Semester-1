#include <stdio.h>
int main()
{
    int num;
    printf("enter the lucky number");
    scanf("%d",&num);
    if (num%2==0)
    printf("even number\n");
    else
    printf("odd number\n");
    if (num%5==0)
    printf("divisible by 5\n");
    else
    printf("not divisible by 5\n");
    return 0;
}