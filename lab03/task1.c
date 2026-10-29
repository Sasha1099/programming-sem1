#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

int main(void) {
    int arr[SIZE];
    int sum_positive = 0;
    int min_index = 0;

    srand((unsigned int)time(NULL));

    // Заповнення масиву випадковими числами від -50 до 50
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 101 - 50;
    }

    // Виведення початкового масиву
    printf("Original array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");

    // Знаходження суми додатних елементів
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > 0) {
            sum_positive += arr[i];
        }
    }

    // Пошук першого мінімального елемента
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    // Зміна знака елементів перед першим мінімумом
    for (int i = 0; i < min_index; i++) {
        arr[i] = -arr[i];
    }

    printf("Sum of positive elements: %d\n", sum_positive);
    printf("Minimum element: %d\n", arr[min_index]);
    printf("Minimum index: %d\n", min_index);

    printf("Modified array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");

    return 0;
}
