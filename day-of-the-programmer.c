#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* dayOfProgrammer(int year) {
    char* s = malloc(100 * sizeof(char));
    char str[5];

    if (year >= 1700 && year <= 1917) {
        if (year % 4 == 0) {
            sprintf(str, "%d", year);
            strcat(s, "12.09.");
            strcat(s, str);
        } else {
            sprintf(str, "%d", year);
            strcat(s, "13.09.");
            strcat(s, str);
        }
    } else if (year >= 1919 && year <= 2700) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            sprintf(str, "%d", year);
            strcat(s, "12.09.");
            strcat(s, str);
        } else {
            sprintf(str, "%d", year);
            strcat(s, "13.09.");
            strcat(s, str);
        }
    } else if (year == 1918) {
        sprintf(str, "%d", year);
        strcat(s, "25.09.");
        strcat(s, str);
    }
    return s;
}

int main() {
	int year = 2000;
	char* result = dayOfProgrammer(year);
	printf("%s\n", result);
}
