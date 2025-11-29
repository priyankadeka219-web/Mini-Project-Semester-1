#include <stdio.h>
int main()
{
    int n,i,marks,total=0;
    float avg;
    printf("enter number of students");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter marks of student %d",i);
        scanf("%d",&marks);
        total=total+marks;
    }
    avg=(float)total/n;
    printf("total marks=%d\n",total);
    printf("average marks=%f\n",avg);
    return 0;
}      