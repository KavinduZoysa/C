#include <stdio.h>

int migratoryBirds(int arr_count, int* arr) {
	int ar[5] = {0, 0, 0, 0, 0};
	int i = 0;
	int val = 0;
	for (i = 0; i < arr_count; i++) {
		val = *(arr + i) - 1;
		ar[val] = ar[val] + 1;
	}
	int max_val = ar[0];
	// printf("%d\n", ar[0]);
	int pos = 0;
	for (i = 1; i < 5; i++) {
		// printf("%d\n", ar[i]);
		if (ar[i] > max_val) {
			pos = i;
			max_val = ar[i];
		}
	}
	return pos + 1;
}



int main() {
	int arr_count = 6;
	int arr[] = {1, 4, 4, 4, 5, 3};

	// int arr_count = 11;
	// int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4};

	int result = migratoryBirds(arr_count, arr);
        printf("%d\n", result);
}
