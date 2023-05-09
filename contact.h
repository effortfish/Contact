#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 6
#define MAX_TELE 12
#define MAX_ADDR 20

enum Option
{
	EXIT,
	ADD,
	DEL,
	SHOW,
	MODIFY,
	SEARCH,
	SORT
};

struct PeoInfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct Contact {
	struct PeoInfo data[1000];
	int size;
};

void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void showContact(const struct Contact* ps);
void DeleContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);