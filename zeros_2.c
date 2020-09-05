#include<stdio.h>
int * move_zeros(int *arr,int size)
{
	static int res[100];
	int i,j=0,zc=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]!=0)
		{
			res[j]=arr[i];//1 2 1
			j++;
		}
		else
		{
			zc++;
		}
	}
	for(i=0;i<zc;i++)
	{
		res[j++]=0;
	}
	return res;
}
int main()
{
	int i,size,arr[100],*res;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=move_zeros(arr,size);//fun call
	for(i=0;i<size;i++)
	{
		printf("%d ",res[i]);
	}
	return 0;
}

