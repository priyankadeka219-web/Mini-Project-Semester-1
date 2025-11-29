#include <stdio.h>
int main() {
    int marks[5][3];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    int highestMath = 0, highestPhysics = 0, highestCS = 0;
    for(int i = 0; i < 5; i++) {
        if(marks[i][0] > highestMath)
            highestMath = marks[i][0];

        if(marks[i][1] > highestPhysics)
            highestPhysics = marks[i][1];

        if(marks[i][2] > highestCS)
            highestCS = marks[i][2];
    }
    printf("Highest marks in Mathematics: %d\n", highestMath);
    printf("Highest marks in Physics: %d\n", highestPhysics);
    printf("Highest marks in Computer Science: %d\n", highestCS);
    return 0;
}