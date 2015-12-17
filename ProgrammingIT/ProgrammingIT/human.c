#include <stdio.h>
#include "human.h"
#include "str.h"

struct Human CreateHuman(char * name, int age, int gender)
{
	struct Human human;
	
	human.age = age;
	human.gender = gender;
	str_copy(human.name, name);

	return human;
}

int PrintHuman(struct Human * human)
{
	printf("Name : %s\n", human->name);
	printf("Age : %d\n", human->age);
	if (human->gender == MALE)
	{
		printf("Gender : Male\n");
	}
	else if (human->gender == FEMALE)
	{
		printf("Gender : Female\n");
	}

	return 0;
}
