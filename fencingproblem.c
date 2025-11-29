#include <stdio.h>
int main()
{
    int length,width;
    printf("enter the length of the land");
    scanf("%d",&length);
    printf("enter the width of the land");
    scanf("%d",&width);
    int area=length*width;
    int perimeter=2*(length+width);
    printf("Area=%d\n",area);
    printf("perimeter= %d\n",perimeter);
    return 0;
}