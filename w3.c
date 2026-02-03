//Mobile Data Limit Exhaustion Checker (While Loop)
#include <stdio.h>
int main() {
    int totalData, n;
    int dailyUsage;
    int daysUsed = 0;
    scanf("%d", &totalData); 
    scanf("%d", &n);         
    int i = 0;
    while (i < n && totalData > 0) {
        scanf("%d", &dailyUsage);
        if (dailyUsage >= totalData) {
            totalData = 0;
            daysUsed++;    
            break;
        } else {
            totalData -= dailyUsage;
            daysUsed++;
        }

        i++;
    }
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB", totalData);
}

