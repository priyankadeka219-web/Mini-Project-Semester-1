#include <stdio.h>
int main()
{
    int n,i;
    int pos=0,neg=0,zero=0;
    printf("enter number of readings");
    scanf("%d",&n);
    int arr[n];
    printf("enter the readings\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            zero++;
    }
    printf("positive=%d\n",pos);
    printf("negative=%d\n",neg);
    printf("zero=%d\n",zero);
    return 0;
}