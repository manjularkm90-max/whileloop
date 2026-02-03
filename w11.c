//Online Course Dropout Risk Evaluator (While Loop)
#include <stdio.h>
int main() {
    int n;  
    scanf("%d", &n);
    int hours;       
    int inactiveWeeks = 0;
    int i = 0;
    while(i < n) {
        scanf("%d", &hours);
        if(hours == 0) {
            inactiveWeeks++;  
        }

        i++;
    }
    printf("Inactive Weeks: %d\n", inactiveWeeks);
    if(inactiveWeeks >= 3) {
        printf("Risk Status: High\n");
    } else {
        printf("Risk Status: Low\n");
    }

    return 0;
}
