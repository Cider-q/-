#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int day = 0;
	printf("Please input a number:");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("��һ\n");
			break;
		case 2:
			printf("�ܶ�\n");
			break;
		case 3:
			printf("����\n");
			break;
		case 4:
			printf("����\n");
			break;
		case 5:
			printf("����\n");
			break;
		case 6:
			printf("����\n");
			break;
		case 7:
			printf("����\n");
			break;

		default:
			printf("please input again");
			break;

	}
	return 0;
}