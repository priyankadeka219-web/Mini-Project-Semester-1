#include <stdio.h>
int main()
{
    int a,b,temp,x,y,GCD,LCM;
    printf("enter two numbers a and b\n");
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }    
    GCD=a;
    LCM=(x*y)/GCD;
    printf("GCD=%d\n",GCD);
    printf("LCM=%d\n",LCM);
}