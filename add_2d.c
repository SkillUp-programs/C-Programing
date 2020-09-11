#include<stdio.h>
#include<stdlib.h>
int ** add_arrays(int **arr1,int **arr2,int r,int c)//3 3
{
	int **res,i,j;
	res=(int**)calloc(r,sizeof(int *));// dynamic allocate of rows
	for(i=0;i<r;i++)
	{
		res[i]=(int *)calloc(c,sizeof(int));
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)//00
		{
			res[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	return res;
}
int main()
{
	int i,j, r,c,**arr1,**arr2,**res;
	scanf("%d%d",&r,&c);//reading row and col sizes
	arr1=(int**)calloc(r,sizeof(int *));
	arr2=(int**)calloc(r,sizeof(int *));// dynamic allocate of rows
	for(i=0;i<r;i++)
	{
		arr1[i]=(int *)calloc(c,sizeof(int));
		arr2[i]=(int *)calloc(c,sizeof(int));// dynamic allocate of cols
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);// reading values for arr1
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr2[i][j]);// reading values for arr2
		}
	}
	res=add_arrays(arr1,arr2,r,c);//fun call
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr1[i][j]); // 1 2 3
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr2[i][j]); // 1 2 3
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",res[i][j]); // 1 2 3
		}
		printf("\n");
	}
	
	return 0;
}

/*
2 2

1 2
3 4

3 4
2 1

4 6
5 5

*/
