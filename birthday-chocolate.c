#include <stdio.h>

int birthday(int s_count, int* s, int d, int m) {
	int i = 0;
	int j = 0;
	int sum = 0;
	int count = 0;
	for (i = 0; i <= s_count - m; i++) {
		sum = 0;
		for (j = i; j < i + m; j++) {
			sum = sum + *(s + j);
		}
		if (sum == d) {
			count = count + 1;
		}
	}
	return count;
}

int main() {
	int s[] = {1, 2, 1, 3, 2};
	int s_count = 5;
	int d = 3;
	int m = 2;
	int result = birthday(s_count, &s[0], d, m);
        printf("%d\n", result);
}


// 5
// 1 2 1 3 2
// 3 2
