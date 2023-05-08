#include "contact.h"

void menu()
{
	printf("**********************************************\n");
	printf("********* 1.add                  2.dele ************\n");
	printf("********* 3.show             4.motify  ***********\n");
	printf("********* 0.exit                            ************\n");
	printf("**********************************************\n");
}

int main()
{
	int input;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("Please enter a function\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			break;
		case 3:
			showContact(&con);
			break;
		case 4:
			break;
		case 0:
			break;
		default:
			printf("Input error, please re-enter\n");
			break;
		}
	} while (input);
	return 0;
}