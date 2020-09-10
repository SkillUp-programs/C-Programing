#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,r,c,arr[100][100];//3X3
	scanf("%d%d",&r,&c);//row col size
	//reading of 2d array
	for(i=0;i<r;i++)//0 1 2
	{
		for(j=0;j<c;j++)// 0 1 2
		{
			//printf("%d%d  ",i,j);00,01,02
			scanf("%d",&arr[i][j]);
		}
	}
	//accessing the 2d array
	for(i=0;i<r;i++)//0 1 2
	{
		for(j=0;j<c;j++)// 0 1 2
		{
			//printf("%d%d  ",i,j);00,01,02
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
