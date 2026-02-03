// Warehouse Shipment Delay Detector (While Loop)
#include <stdio.h>
int main() {
    int n; 
    scanf("%d", &n);
    int delay;         
    int totalDelay = 0; 
    int delayedDays = 0; 
    int i = 0;
     while(i < n) {
        scanf("%d", &delay);

        totalDelay += delay; 

        if(delay > 2) {
            delayedDays++;
        }

        i++;
    }
    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Days: %d\n", delayedDays);
}
