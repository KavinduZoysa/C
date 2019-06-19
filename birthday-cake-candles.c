#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(int ar_count, int* ar) 
{
    // printf("Pointer of the element of the array : %p\n", ar);
    // printf("Pointer of the element of the array : %p\n", ar + 1);
    // printf("Value of the element of the array : %d\n", *(ar + 1));

    int count, i = 0;
    int max = -1;
    for (i = 0; i < ar_count; i++) {
    	printf("Value of the element of the array : %d\n", *(ar + i));
        if (*(ar + i) > max) {
		max = *(ar + i);
		count = 1;		
	} else if (*(ar + i) == max) {
		count = count + 1;
	}
    }
    printf("Count : %d\n", count);
}

int main()
{
    int array[] = {3, 2, 1, 3};
    birthdayCakeCandles(4, &array[0]);
    return 0;
}


