#include <stdio.h>

int main(void) {

    printf("=== Memory Audit: Data Types Sizes ===\n");
    printf("sizeof(char)      = %zu bytes\n", sizeof(char));
    printf("sizeof(short)     = %zu bytes\n", sizeof(short));
    printf("sizeof(int)       = %zu bytes\n", sizeof(int));
    printf("sizeof(long)      = %zu bytes\n", sizeof(long));
    printf("sizeof(long long) = %zu bytes\n", sizeof(long long));
    printf("sizeof(float)     = %zu bytes\n", sizeof(float));
    printf("sizeof(double)    = %zu bytes\n", sizeof(double));
    printf("sizeof(void*)     = %zu bytes\n", sizeof(void*));

    printf("\n=== Integer Overflow Demonstration ===\n");

    unsigned char byte_test = 255;

    printf("Before overflow:\n");
    printf("Decimal (%%u): %u\n", byte_test);
    printf("Hex (0x%%02X): 0x%02X\n", byte_test);

    byte_test = byte_test + 1;

    printf("After overflow (255 + 1):\n");
    printf("Decimal (%%u): %u\n", byte_test);
    printf("Hex (0x%%02X): 0x%02X\n", byte_test);

    return 0;
}