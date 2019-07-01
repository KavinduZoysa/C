#include <stdio.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) {
	*result_count = grades_count;
	int count, i, temp = 0;
	for (i = 0; i < grades_count; i++) {
		temp = 	*(grades + i);
		count = 1;
		if (temp < 38) {
			continue;		
		}
		while (!(temp % 5 == 0 || count == 3)) {
			temp = temp + 1;
			count = count + 1;		
		}
		if (temp % 5 == 0) {
			*(grades + i) = temp;
		}
	}
	return grades;
}

int main() {
	int result_count;
	int array[] = {73, 67, 38, 33};
	int* result = gradingStudents(4, &array[0], &result_count);

	for (int i = 0; i < result_count; i++) {
        	printf("%d\n", *(result + i));
    	}	
}
