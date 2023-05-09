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
		scanf("%d", ps->data[ps->size].tele);
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
			printf("%s %d %s %d %s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}

void DeleContact(struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	int index = 0;
	printf("Please enter the name you want to delete\n");
	scanf("%s", &name);
	if (ps->size > 0)
	{
		for (int i = 0; i < ps->size; i++)
		{
			if (strcmp(name, ps->data[i].name))
			{
				ps->data[i] = ps->data[ps->size - 1];
				free(ps->data[ps->size - 1]);
				ps->size--;
				index = 1;
				printf("succeful\n");
				break;
			}
		}
	}
	if (index == 0)
	{
		printf("Name is not found or Contact is empty\n");
	}
}