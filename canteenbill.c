#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int bill[20][20];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &bill[i][j]);
        }
    }

    int studentTotal[20] = {0};
    int dayTotal[20] = {0};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];     
        }
    }

    for(int i = 0; i < n; i++) {
        printf("Student %d total: %d\n", i+1, studentTotal[i]);
    }

    int maxDay = 0;
    for(int j = 1; j < m; j++) {
        if(dayTotal[j] > dayTotal[maxDay]) {
            maxDay = j;
        }
    }
    printf("Highest collection on Day %d\n", maxDay + 1);

    int maxSpend = studentTotal[0];
    for(int i = 1; i < n; i++) {
        if(studentTotal[i] > maxSpend) {
            maxSpend = studentTotal[i];
        }
    }

    printf("Highest spender: ");
    for(int i = 0; i < n; i++) {
        if(studentTotal[i] == maxSpend) {
            printf("Student %d ", i+1);
        }
    }

    return 0;
}