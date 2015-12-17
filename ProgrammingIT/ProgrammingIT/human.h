#pragma once
enum {MALE, FEMALE};

struct Human
{
	char name[20];
	int age, gender;
};

struct Human CreateHuman(char *name, int age, int gender);
int PrintHuman(struct Human *human);