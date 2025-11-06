#include <stdio.h>

int main() {
    float principal, rate, time, interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    printf("\nSimple Interest = %.2f\n", interest);
     return 0;
}