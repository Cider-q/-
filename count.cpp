#include <stdio.h>
#define N 10

void printScore(int score[]) //打印分数
{
	int i;
	printf("\n");
	for(i=0; i<N;i++)
	{
		printf("%d ",score[i]);
	}
	printf("\n");
}

int getTotalScore(int score[]) //计算总分
{
	int sum = 0;
	int i ;
	for(i=0;i<N;i++)
		sum+=score[i];
	return sum;
}

int getAvgScore(int score[])//计算平均分
{
	return getTotalScore(score)/N;
}

int getMax(int score[])//对比最高分
{
	int max = -1;
	int i;
	for(i=0;i<N;i++)
	{
		if(score[i]>max)
			max = score[i];
	}
	return max;
}

int getMin(int score[])//对比最低分
{
	int Min = 100;
	int i;
	for(i=0;i<N;i++)
	{
		if(score[i]<Min)
			Min = score[i];
	}
	return Min;
}

void downsort(int score[])//分数降序排序,从大到小
{
	int i,j;
	for(i=N-2;i>=0;i--)//对比次数：8次==N-2==10-2==8
	{
		for(j=0;j<=i;j++)
		{
			if(score[j]<score[j+1])
			{
				int temp;
				temp = score[j];
				score[j]=score[j+1];//score[j+1]的数值要小于[j]
				score[j+1]=temp;
			}
		}
	}
	printScore(score);
}

void upsort(int score[])//分数升序排序，从小到大
{
	int i,j;
	for(i=N-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(score[j]>score[j+1])
			{
				int temp;
				temp = score[j];
				score[j] = score[j+1];
				score[j+1] = temp;
			}
		}
	}
	printScore(score);
}

int main()
{
	int score[N] = {67,98,75,63,82,79,81,91,66,84};
	int sum,avg,max,min;
	sum = getTotalScore(score);
	avg = getAvgScore(score);
	max = getMax(score);
	min = getMin(score);
	printf("总分是：%d\n",sum);
	printf("平均分是：%d\n",avg);
	printf("最高分是：%d\n",max);
	printf("最低分是：%d\n",min);
	printf("----------成绩排名---------\n");
	downsort(score);
	return 0;    
}