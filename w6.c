//Online Order Cancellation Risk Monitor (While Loop)
#include <stdio.h>
int main() {
    int n; 
    scanf("%d", &n);
    int m;             
    int i = 0;
    int successful = 0;
    int cancelled = 0;
    while (i < n) {
        scanf("%d", &m);
        if (m == 1) {
            successful++;
        } else {
            cancelled++;
        }

        i++;
    }
    printf("Successful: %d\n", successful);
    printf("Cancelled: %d\n", cancelled);
    if (cancelled > successful) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }
}
