#include <stdio.h>
int main() {
	int age;
	char gender;
	char hobby[50], goal[100];
	char name[50], address[100], email[50];
	printf("Enter your name:");
	fgets(name, sizeof(name), stdin);
	printf("Enter your age:");
	scanf("%d", &age);
	getchar();//clears newline from buffer
	printf("Enter your gender: ");
	scanf(" %c", &gender);
	getchar();
	printf("Enter your address: ");
	fgets(address, sizeof(address), stdin);

	printf("Enter your email:");
	fgets(email, sizeof(email), stdin);

	printf("Enter your favorite hobby: ");
	fgets(hobby, sizeof(hobby), stdin);

	printf("Enter your short-term goal: ");
	fgets(goal, sizeof(goal), stdin);

	printf("\n---USER INFORMATION---\n");
	printf("Name: %s", name);
	printf("Age: %d\n", age);
	printf("Gender: %c\n", gender);
	printf("Address: %s", address);
	printf("Email: %s", email);
	printf("Hobby: %s", hobby);
	printf("Goal: %s", goal);

	return 0;
}