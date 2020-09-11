#include<stdio.h>
#include<stdlib.h>
int isidentical(int **arr1,int **arr2,int r1,int c1,int r2,int c2)
{
	int i,j;
	
	if(r1==r2 && c1==c2)
	{
	
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				if(arr1[i][j]!=arr2[i][j])
				{
					return 0;
				}
			}
		}
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i,j, r1,c1,r2,c2,**arr1,**arr2;
	scanf("%d%d",&r1,&c1);//reading row and col sizes
	arr1=(int**)calloc(r1,sizeof(int *));
	for(i=0;i<r1;i++)
	{
		arr1[i]=(int *)calloc(c1,sizeof(int));
	}
	
	scanf("%d%d",&r2,&c2);//reading row and col sizes
	arr2=(int**)calloc(r2,sizeof(int *));
	for(i=0;i<r2;i++)
	{
		arr2[i]=(int *)calloc(c2,sizeof(int));
	}
	
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&arr1[i][j]);// reading values for arr1
		}
	}
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&arr2[i][j]);// reading values for arr2
		}
	}
	
	if(isidentical(arr1,arr2,r1,c1,r2,c2))//  
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
