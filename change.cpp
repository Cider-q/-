#include<stdio.h>
main()
{
	int a,b;
	printf("please input number for a:");
	scanf("%d",&a);
	printf("please input number for b:");
	scanf("%d",&b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d,b = %d\n", a, b);
	return 0;
}