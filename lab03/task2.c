#include <stdio.h>

#define ROWS 4
#define COLS 5

int main(void) {
    int matrix[ROWS][COLS] = {
        {  1, -2,   3,   4,  -5},
        { -6,  7,  -8,   9,  10},
        { 11, 12, -13, -14,  15},
        {-16, 17,  18, -19, -20}
    };

    int positive_count[ROWS] = {0};

    printf("Original matrix:\n");

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%6d", matrix[i][j]);

            if (matrix[i][j] > 0) {
                positive_count[i]++;
            }
        }
        printf("\n");
    }

    printf("\nPositive elements in each row:\n");

    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: %d\n", i + 1, positive_count[i]);
    }

    return 0;
}
