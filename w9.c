//Loan EMI Default Streak Analyzer (While Loop)
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
     int currentStreak = 0;
    int maxStreak = 0;
    int status; 
    int i = 0;
    while(i < n) {
        scanf("%d", &status);
        if(status == 0) {
            currentStreak++;       
            if(currentStreak > maxStreak) {
                maxStreak = currentStreak;  
            }
        } else {
            currentStreak = 0;     
        }

        i++;
    }
    printf("Longest Default Streak: %d\n", maxStreak);
}
