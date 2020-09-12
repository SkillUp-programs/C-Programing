#include<stdio.h>
#include<stdlib.h>
int ** transpose_2darray(int **arr,int r,int c)
{
	int i,j,**res;
	res=(int **)calloc(c,sizeof(int *));
	for(i=0;i<c;i++)
	{
		res[i]=(int *)calloc(r,sizeof(int));
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			//printf("%d%d ",j,i);
			//printf("%d%d ",i,j);
			res[i][j]=arr[j][i];
		}	
	}
	return res;
}


int main()
{
	int i,j,r,c,**arr,**res;
	scanf("%d%d",&r,&c);//3 3
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
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	res=transpose_2darray(arr,r,c);//fun call
	printf("\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
/*
3 3
1 2 3
4 5 6
7 8 9

o/p:
1 4 7
2 5 8
3 6 9
*/
