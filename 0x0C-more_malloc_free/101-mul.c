#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_valid_number(char *str);
void multiply(char *num1, char *num2);

int main(int argc, char **argv)
{
    if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        printf("Error\n");
        return 98;
    }

    multiply(argv[1], argv[2]);

    return 0;
}

int is_valid_number(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!isdigit(str[i])) {
            return 0;
        }
        i++;
    }

    return 1;
}

void multiply(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int *result = calloc(len1 + len2, sizeof(int));
    int i, j;

    for (i = len1 - 1; i >= 0; i--) {
        for (j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int pos1 = i + j;
            int pos2 = i + j + 1;
            int sum = mul + result[pos2];

            result[pos1] += sum / 10;
            result[pos2] = sum % 10;
        }
    }

    i = 0;
    while (i < len1 + len2 && result[i] == 0) {
        i++;
    }

    if (i == len1 + len2) {
        printf("0\n");
    } else {
        for (; i < len1 + len2; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
    }

    free(result);
}
