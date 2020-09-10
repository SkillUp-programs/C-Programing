#include<stdio.h>
#include<stdlib.h>
int ** copy_2d_array(int **arr,int r,int c)
{
	int i,j,res[100][100]
	res=(int**)calloc(r,sizeof(int *));//rows
	for(i=0;i<r;i++)
	{
		res[i]=(int *)calloc(c,sizeof(int));
	}
	for(i=0;i<r;i++)//0 1 2
	{
		for(j=0;j<c;j++)// 0 1 2
		{
			res[i][j]=arr[i][j];
		}	
	}
	return res;
}
int main()
{
	int i,j,r,c,**arr,**res;//3X3
	scanf("%d%d",&r,&c);//row col size
	arr=(int**)calloc(r,sizeof(int *));//rows
	//printf("%d  %d\n",arr,*arr);
	for(i=0;i<r;i++)
	{
		//printf("%d  ",arr[i]);
		arr[i]=(int *)calloc(c,sizeof(int));
	}
	for(i=0;i<r;i++)//0 1 2
	{
		for(j=0;j<c;j++)// 0 1 2
		{
			//printf("%d%d  ",i,j);00,01,02
			scanf("%d",&arr[i][j]);
		}
	}
	res=copy_2d_array(arr,r,c);//fun call
	for(i=0;i<r;i++)//0 1 2
	{
		for(j=0;j<c;j++)// 0 1 2
		{
			//printf("%d%d  ",i,j);00,01,02
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}

	return 0;
}
