#include <stdio.h>
int main()
{
    int n, i, marks[100];
    int highest, lowest;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    printf("Enter marks of %d subjects: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    highest = lowest = marks[0];
    for(i = 1; i < n; i++)
    {
        if(marks[i] > highest)
            highest = marks[i];
        if(marks[i] < lowest)
            lowest = marks[i];
    }
    printf("Highest = %d\n", highest);
    printf("Lowest = %d", lowest);
    return 0;
}