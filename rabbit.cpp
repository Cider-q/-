#include<stdio.h>
int main()
{
    long f1,f2;
    int i;
    f1=f2=1;//一二月的兔子数
    for ( i = 1; i <= 12; i++)
    {
        printf("%12ld %12ld",f1*2,f2*2);
        if (i%2 == 0)
        {
            printf("\n");
        }
		f1=f1+f2;//三月；五月；七月....
        f2=f1+f2;//四月；六月；八月....
    }
    
}