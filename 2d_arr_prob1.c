#include<stdio.h>
#include<stdlib.h>
int isidentical(int **arr1,int **arr2,int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr1[i][j]!=arr2[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int i,j, r,c,**arr1,**arr2;
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
	if(isidentical(arr1,arr2,r,c))//  
	{
		printf("Identical");
	}
	else
	{
		printf("Not");
	}
	
	return 0;
}

/*
1 2 3
1 2 3
1 2 3



1 2 4
1 2 3
1 2 3
*/
