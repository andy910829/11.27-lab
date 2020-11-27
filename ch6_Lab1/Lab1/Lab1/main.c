#include<stdio.h>
#include<stdlib.h>
#include"information.h"

int main()
{
	Person person;
	printf("Please input your name: ");
	scanf_s("%s", &person.name, 8);

	printf("Please input your gender<0 for woman,1 for man>: ");
	scanf_s("%d", &person.gender);

	printf("Please input your age: ");
	scanf_s("%d", &person.age);

	printf("\nHi! %s\n", person.name);

	if (person.gender == 0)
		printf("You are %d-year-old woman.\n", person.age);
	else
		printf("You are %d-year-old man.\n", person.age);
	system("pause");


}