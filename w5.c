// Factory Machine Failure Streak Analyzer (While Loop)
#include <stdio.h>
int main() {
    int n; 
    scanf("%d", &n);
    int m;        
    int i = 0;          
    int currentStreak = 0;
    int maxStreak = 0;
    while (i < n) {
        scanf("%d", &m);
        if (m== 0) {     
            currentStreak++;
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {               
            currentStreak = 0;  
        }

        i++;
    }

    printf("Longest Failure Streak: %d\n", maxStreak);
}
