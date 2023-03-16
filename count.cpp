#include <stdio.h>
#define N 10

void printScore(int score[]) //��ӡ����
{
	int i;
	printf("\n");
	for(i=0; i<N;i++)
	{
		printf("%d ",score[i]);
	}
	printf("\n");
}

int getTotalScore(int score[]) //�����ܷ�
{
	int sum = 0;
	int i ;
	for(i=0;i<N;i++)
		sum+=score[i];
	return sum;
}

int getAvgScore(int score[])//����ƽ����
{
	return getTotalScore(score)/N;
}

int getMax(int score[])//�Ա���߷�
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

int getMin(int score[])//�Ա���ͷ�
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

void downsort(int score[])//������������,�Ӵ�С
{
	int i,j;
	for(i=N-2;i>=0;i--)//�Աȴ�����8��==N-2==10-2==8
	{
		for(j=0;j<=i;j++)
		{
			if(score[j]<score[j+1])
			{
				int temp;
				temp = score[j];
				score[j]=score[j+1];//score[j+1]����ֵҪС��[j]
				score[j+1]=temp;
			}
		}
	}
	printScore(score);
}

void upsort(int score[])//�����������򣬴�С����
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
	printf("�ܷ��ǣ�%d\n",sum);
	printf("ƽ�����ǣ�%d\n",avg);
	printf("��߷��ǣ�%d\n",max);
	printf("��ͷ��ǣ�%d\n",min);
	printf("----------�ɼ�����---------\n");
	downsort(score);
	return 0;    
}