//Bank Minimum Balance Violation Tracker (While Loop)
#include <stdio.h>
int main() {
    int days, i = 0;
    int balance;
    int trans;
    int lowBalanceDays = 0;
    scanf("%d", &days);
    scanf("%d", &balance);
    while (i < days) {
        scanf("%d", &trans);
        balance = balance + trans;
        if (balance < 2000) {
            lowBalanceDays++;
        }i++;
    }
    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d", lowBalanceDays);
}

