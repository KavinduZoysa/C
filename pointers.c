#include <stdio.h>

int main() {

	// int var1;
	// char var2[10];

	// printf("Address of the var1 variable: %p\n", &var1);
	// printf("Address of the var2 variable: %p\n", &var2);

	int var = 20;
	int* ip;

	ip = &var; // Assign the address of the 'var' into pointer variable 'ip'

	printf("Address of the var variable: %p\n", &var);
	printf("Address stored in ip variable: %p\n", ip);
	printf("Value of *ip variable: %d\n", *ip);
}
