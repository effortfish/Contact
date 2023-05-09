#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void AddContact(struct Contact* ps)
{
	if (ps->size == 1000)
	{
		printf("The space is full\n");
	}
	else
	{
		printf("Please enter your name:>\n");
		scanf("%s", ps->data[ps->size].name);
		getchar();
		printf("Please enter your age:>\n");
		scanf("%d", &(ps->data[ps->size].age));
		getchar();
		printf("Please enter your sex:>\n");
		scanf("%s", ps->data[ps->size].sex);
		getchar();
		printf("Please enter your telephone:>\n");
		scanf("%ld", ps->data[ps->size].tele);
		getchar();
		printf("Please enter your address:>\n");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("succeful\n");
	}
}

void showContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("Contact is empty\n");
	}
	else
	{
		//printf("%20s\t%4s\t%6s\t%20s\t%10s\n", "name", "age", "sex", "tele", "address");
		for (int i = 0; i < ps->size; i++)
		{
			printf("%s %d %s %s %s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}

void DeleContact(struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	int index = 0;
	printf("Please enter the name you want to delete\n");
	scanf("%s", &name);
	int i = 0;
	//²éÕÒ
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
			break;
	}
	//É¾³ý
	for (int j = i; j < ps->size - 1; j++)
	{
		ps->data[j] = ps->data[j+1];
	}
	ps->size--;
	printf("succeful\n");
}

void ModifyContact(struct Contact* ps)
{
	if (ps->size > 0)
	{
		char name[MAX_NAME] = { 0 };
		printf("Please enter the name you want to modify\n");
		scanf("%s", name);
		int i = 0;
		int choise;
		char newName[MAX_NAME] = { 0 };
		int newAge = 0;
		char newSex[5];
		int newTele[20];
		char newAddr[20];
		for (i = 0; i < ps->size; i++)
		{
			if (strcmp(ps->data[i].name, name) == 0)
				break;
		}
		printf("Found\n");
		printf("Please enter the options you want to modify\n");
		printf("1. name    2.age    3.sex    4.tele    5.address\n");
		scanf("%d", &choise);
		switch (choise)
		{
		case 1:
			printf("Please enter a new name\n");
			scanf("%s", newName);
			strcpy(ps->data[i].name, newName);
			printf("succeful\n");
			break;
		case 2:
			printf("Please enter a new age\n");
			scanf("%d", &newAge);
			ps->data[i].age = newAge;
			printf("succeful\n");
			break;
		case 3:
			printf("Please enter a new sex\n");
			scanf("%s", newSex);
			strcpy(ps->data[i].sex, newSex);
			printf("succeful\n");
			break;
		case 4:
			printf("Please enter a new telephone\n");
			scanf("%d", newTele);
			strcpy(ps->data[i].tele, newTele);
			printf("succeful\n");
			break;
		case 5:
			printf("Please enter a new address\n");
			scanf("%s", newAddr);
			strcpy(ps->data[i].addr, newAddr);
			printf("succeful\n");
			break;
		}
	}
	else
	{
		printf("The contact is empty\n");
	}
}