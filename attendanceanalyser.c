#include<stdio.h>
int main()
{
    int n,i;
    int present=0,absent=0;
    printf("enter number of students");
    scanf("%d",&n);
    int attendance[n];
    printf("enter attendance (0 for absent,1 for present)\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &attendance[i]);
        if(attendance[i]==1)
            present++;
        else
            absent++;
    }
    printf("present=%d\n",present);
    printf("absent=%d\n",absent);
    return 0;
}