#include <stdio.h>

int main(void) {
    double f, L;
    const double PI = 3.14159;
    double X;

    printf("Enter frequency f (Hz): ");
    if (scanf("%lf", &f) != 1 || f < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter inductance L (H): ");
    if (scanf("%lf", &L) != 1 || L < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    X = 2 * PI * f * L;

    printf("Reactive inductive resistance X = %.2f Ohm\n", X);

    return 0;
}