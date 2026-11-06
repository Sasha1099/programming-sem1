#include <stdio.h>

int main(void) {
    char str[256];

    printf("Enter a string:\n");

    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error!\n");
        return 1;
    }

    int read = 0;
    int write = 0;

    while (str[read] != '\0') {
        if (str[read] == ' ') {
            str[write] = ' ';
            write++;

            while (str[read] == ' ') {
                read++;
            }
        } else {
            str[write] = str[read];
            write++;
            read++;
        }
    }

    str[write] = '\0';

    printf("Modified string:\n%s", str);

    return 0;
}
