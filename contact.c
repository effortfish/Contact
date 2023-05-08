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
		printf("Please enter your age:>\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("Please enter your sex:>\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("Please enter your telephone:>\n");
		scanf("%d", ps->data[ps->size].tele);
		printf("Please enter your address:>\n");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("succeful\n");
	}
}

void showContact(struct Contact* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%s %d %s %d %s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
	}
}