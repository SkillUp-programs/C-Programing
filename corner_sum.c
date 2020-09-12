#include<stdio.h>
#include<stdlib.h>
int *corner_sum(int **arr,int r,int c)
{
	int i,j,*res;
	res=calloc(2,sizeof(int));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				res[0]+=arr[i][j];
			}
			if(i+j==r-1)
			{
				res[1]+=arr[i][j];
			}
		}
	}
	return res;
}
int main()
{
	int i,j,r,c,**arr,*res;
	scanf("%d%d",&r,&c);
	arr=(int **)calloc(r,sizeof(int *));
	for(i=0;i<r;i++)
	{
		arr[i]=(int *)calloc(c,sizeof(int));
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	res=corner_sum(arr,r,c);//2 3
	for(i=0;i<2;i++)
	{
		printf("%d ",res[i]);
	}
	
	return 0;
}
/*
3 3

1 2 3
4 5 6
7 8 9

*/
