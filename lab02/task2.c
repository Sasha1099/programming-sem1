#include <stdio.h>
#include <math.h>

int main(void)
{
double x, epsilon;
double term = 1.0;
double sum = 1.0;
int n = 0;

printf("Enter X (-1 < X < 1): ");
if (scanf("%lf", &x) != 1) {
    printf("Error: invalid input.\n");
    return 1;
}

printf("Enter epsilon (accuracy): ");
if (scanf("%lf", &epsilon) != 1) {
    printf("Error: invalid input.\n");
    return 1;
}

if (x <= -1.0 || x >= 1.0) {
    printf("Error: X must be between -1 and 1.\n");
    return 1;
}

if (epsilon <= 0.0) {
    printf("Error: epsilon must be positive.\n");
    return 1;
}

while (fabs(term) >= epsilon && n < 100000) {
    term *= x;
    sum += term;
    n++;
}

if (n >= 100000) {
    printf("Warning: maximum number of iterations reached.\n");
}

double exact = 1.0 / (1.0 - x);
double error = fabs(sum - exact);

printf("\nSum of series: %.10f\n", sum);
printf("Exact value:   %.10f\n", exact);
printf("Absolute error: %.10f\n", error);
printf("Iterations: %d\n", n);

return 0;

}
