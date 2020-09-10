#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,r,c,**arr;//3X3
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
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
