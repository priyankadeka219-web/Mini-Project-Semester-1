#include <stdio.h>
int main() {
    int A[10][7];
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int presentCount[10] = {0};
    int highestAttendance = 0;
    int topStudent = 1;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 7; j++) {
            presentCount[i] += A[i][j];
        }
        if(presentCount[i] > highestAttendance) {
            highestAttendance = presentCount[i];
            topStudent = i + 1;
        }
    }
    int daySum[7] = {0};
    for(int j = 0; j < 7; j++) {
        for(int i = 0; i < 10; i++) {
            daySum[j] += A[i][j];
        }
    }

    int lowestDay = 1;
    int lowestAttendance = daySum[0];

    for(int j = 1; j < 7; j++) {
        if(daySum[j] < lowestAttendance) {
            lowestAttendance = daySum[j];
            lowestDay = j + 1;  
        }
    }
    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");

    printf("Total Present Days:\n");
    for(int i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, presentCount[i]);
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n",
           topStudent, highestAttendance);

    printf("\nDay with Lowest Overall Attendance: Day %d\n", lowestDay);

    return 0;
}