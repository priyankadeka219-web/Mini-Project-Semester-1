#include<stdio.h>
int main ()
{
    int n , i , count = 0 ;
    printf("enter the number:\n");
    scanf("%d",& n);
    if(n% 2==0)
        printf("%d is a even number\n", n);
        else
        printf("%d is a odd number\n", n);
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++ ;
            }
        }
        if(count==2)
        printf("%d is a prime number\n",n);
        else
        printf("%d is not a prime number\n",n);
        return 0 ;
    }