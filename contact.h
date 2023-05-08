#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct PeoInfo {
	char name[10];
	int age;
	char sex[5];
	int tele[20];
	char addr[20];
};

struct Contact {
	struct PeoInfo data[1000];
	int size;
};

void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void showContact(struct Contact* ps);