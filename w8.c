//Hospital Bed Occupancy Threshold Monitor (While Loop)
#include <stdio.h>
int main() {
    int capacity, n;
    scanf("%d", &capacity);
    scanf("%d", &n);
    int occupiedBeds = 0;
    int criticalHours = 0;
    int m;
    int i = 0;
    int threshold = (capacity * 90) / 100;  
    while(i < n) {
        scanf("%d", &m);
        occupiedBeds += m;
        if(occupiedBeds > threshold) {
            criticalHours++;
        }

        i++;
    }
    printf("Final Occupied Beds: %d\n", occupiedBeds);
    printf("Critical Hours: %d\n", criticalHours);

    return 0;
}
