#include <stdio.h>
int main() {
	int a, b, product;
	printf("Enter a number");
	scanf("%d", &a);
	printf("Enter a number");
	scanf("%d", &b);
	product = a * b;
	printf("The product is: %d\n", product);
	return 0;
}