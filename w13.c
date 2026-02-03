//Smart Meter Power Surge Analyzer (While Loop)
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int usage;           
    int maxUsage = 0;    
    int surgeHours = 0;  
    int i = 0;
    while(i < n) {
        scanf("%d", &usage);

        if(usage > maxUsage) {
            maxUsage = usage;  
        }

        if(usage > 5) {
            surgeHours++;    
        }

        i++;
    }
    printf("Max Usage: %d\n", maxUsage);
    printf("Surge Hours: %d\n", surgeHours);
}
