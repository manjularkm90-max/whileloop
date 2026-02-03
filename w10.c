//Fuel Tank Safety Consumption Monitor (While Loop)
#include <stdio.h>
int main() {
    int fuel, n;
    scanf("%d", &fuel);  
    scanf("%d", &n);     
    int tripFuel;       
    int completedTrips = 0;
    int i = 0;
    while(i < n) {
        scanf("%d", &tripFuel);
        if(fuel >= tripFuel) {
            fuel -= tripFuel;       
            completedTrips++;      
        } else {
            break;                  
        }

        i++;
    }

    printf("Completed Trips: %d\n", completedTrips);
    printf("Remaining Fuel: %d\n", fuel);
}
