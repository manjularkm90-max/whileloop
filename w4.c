//Bank ATM Cash Depletion Tracker (While Loop)
#include <stdio.h>
int main() {
    int cash, n;
    int withdrawal;
    int successfulWithdrawals = 0;
    scanf("%d", &cash);
    scanf("%d", &n);
    int i = 0;
    while (i < n ){
        scanf("%d", &withdrawal);
        if (withdrawal <=cash) {
            cash -= withdrawal; 
            successfulWithdrawals++;
        } else {
            break;
        }

        i++;
    }
    printf("Successful Withdrawals: %d\n", successfulWithdrawals);
    printf("Remaining Cash: %d\n", cash);
}
