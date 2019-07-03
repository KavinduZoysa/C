#include <stdio.h>

int a[2];
int* breakingRecords(int scores_count, int* scores, int* result_count) {
	*result_count = 2;
	int min_value = *(scores);
	int max_value = *(scores);
	int i, max_count = 0;
	int min_count = 0;
	for(i = 1; i < scores_count; i++) {
		if (*(scores + i) < min_value) {
			min_count = min_count + 1;
			min_value = *(scores + i);		
		} else if (*(scores + i) > max_value) {
			max_count = max_count + 1;
			max_value = *(scores + i);
		}
	}

	a[0] = max_count;
	a[1] = min_count;

	return a;
}

int main() {
	int result_count;
	int array[] = {10, 5, 20, 20, 4, 5, 2, 25, 1};
	int scores_count = 9;
        int* result = breakingRecords(scores_count, &array[0], &result_count);

	for (int i = 0; i < result_count; i++) {
        	printf("%d\n", *(result + i));
    	}
}
