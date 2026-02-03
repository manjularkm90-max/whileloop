//Elevator Overload Warning System (While Loop)
#include <stdio.h>
int main() {
    int maxWeight, n;
    scanf("%d", &maxWeight);
    scanf("%d", &n);
    int totalWeight = 0;
    int passengersAllowed = 0;
    int weight;
    int i = 0;
    while(i < n) {
        scanf("%d", &weight);
        if(totalWeight + weight > maxWeight) {
            break; 
        }
        totalWeight += weight;
        passengersAllowed++;
        i++;
    }
    printf("Passengers Allowed: %d\n", passengersAllowed);
    if(passengersAllowed < n) {
        printf("Overload: Yes\n");
    } else {
        printf("Overload: No\n");
    }
}
