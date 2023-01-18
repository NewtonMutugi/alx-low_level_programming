#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_number(char* string) {
    unsigned int i;

    for (i = 0; i < strlen(string); i++) {
        if (!isdigit(string[i])) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char** argv) {
	    int num1, num2;
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }

    if (!is_number(argv[1]) || !is_number(argv[2])) {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    printf("%d\n", num1 * num2);
    return 0;
}

