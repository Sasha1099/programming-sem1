#include <stdio.h>

int main(void)
{
double x_start, x_end, dx;
double x, y;

printf("Enter X start: ");
if (scanf("%lf", &x_start) != 1) {
    printf("Error: invalid input.\n");
    return 1;
}

printf("Enter X end: ");
if (scanf("%lf", &x_end) != 1) {
    printf("Error: invalid input.\n");
    return 1;
}

printf("Enter step dX: ");
if (scanf("%lf", &dx) != 1) {
    printf("Error: invalid input.\n");
    return 1;
}

if (x_start >= x_end || dx <= 0) {
    printf("Error: X start must be less than X end and dX must be positive.\n");
    return 1;
}

printf("\n---------------------------------\n");
printf("| %10s | %12s |\n", "X", "Y(X)");
printf("---------------------------------\n");

for (x = x_start; x <= x_end + dx * 1e-9; x += dx) {
    if (x <= -2.0) {
        y = 4.0;
    } else if (x < 2.0) {
        y = x * x - 1.0;
    } else {
        y = 2.0 * x;
    }

    printf("| %10.2lf | %12.4lf |\n", x, y);
}

printf("---------------------------------\n");

return 0;
}
