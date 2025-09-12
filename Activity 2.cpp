#include <stdio.h>
int main() {
	int grade;

	printf("Enter your grade: ");
	scanf("%d", &grade);
	if (grade >=75 && grade <=100) {
		printf("Congratulations! You passed!\n");
	}
	else if (grade >= 50 && grade <= 74) {
		printf("You have failed.\n");
	}
	else {
		printf("Invalid\n");
	}
	return 0;
}