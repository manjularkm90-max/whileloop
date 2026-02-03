//Classroom Noise Violation Detector (While Loop)
#include<stdio.h>
int main() {
    int n;
    int violations = 0;
    int noise;
    int current = 0;
    int max = 0;
    scanf("%d", &n);
    while (n > 0) {
        scanf("%d", &noise);
        if (noise > 70) {
            violations++;
            current++;
            if (current > max) {
                max = current;
            }
        } else {
            current = 0;
        }
        n--;
    }
    printf("Noise Violations: %d\n", violations);
    printf("Longest Violation streak: %d", max);
}
