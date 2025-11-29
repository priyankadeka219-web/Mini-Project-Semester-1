#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int totalProfit = 0, totalLoss = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            totalProfit += arr[i];
        } else {
            totalLoss += (-arr[i]);
        }
    }
    int netBalance = totalProfit - totalLoss;
    printf("Total Profit: %d\n", totalProfit);
    printf("Total Loss: %d\n", totalLoss);
    printf("Net Balance: %d\n", netBalance);
    return 0;
}