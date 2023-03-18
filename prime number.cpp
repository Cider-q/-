#include<stdio.h>
#include<math.h>

int way1()
{
	int i,n;
	printf("Way1 Please input number:");
	scanf("%d",&n);
	for(i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			printf("This is not a prime!\n");
			break; //Ìø³öforÑ­»·
		}
	}
	if(i>=n)
	{
		printf("This is a prime!\n");
	}
	return 0;
}

int way2()
{
	int i,n;
	printf("Way2 Please input number:");
	scanf("%d",&n);
	for ( i = 2; i <=n/2; i++)
	{
		if (n%i==0)
		{
			printf("This is not a prime!\n");
			break;
		}
		
	}
	if (i==n/2+1)
	{
		printf("This is a prime!\n");
	}
	return 0;
}

int way3()
{
	int i,n;
	printf("Way3 Please input number:");
	scanf("%d",&n);
	for ( i = 2; i < sqrt(n); i++)
	{
		if (n%i==0)
		{
			break;
		}
		
	}
	if (sqrt(n)<i)
	{
		printf("%d is prime!",n);
	}
	else
	{
		printf("%d is not prime!",n);
	}
	return 0;
}

main()
{
	way1();
	way2();
	way3();

}