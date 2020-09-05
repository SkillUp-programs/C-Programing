#include<stdio.h>
//6
//1 0 2 0 0 1

void delete_array(int *arr,int *size,int pos)
{
	int i;
	for(i=pos-1;i<*size-1;i++)
	{
		//printf("%d ",arr[i]);
		arr[i]=arr[i+1];
	}
	//printf("%d\n",arr[pos-1]);
	*size=*size-1;
}
void move_zeros(int *arr,int size)
{
	int i,zc=0;
	for(i=0;i<size;)
	{
		if(arr[i]==0)
		{
			zc++;
			delete_array(arr,&size,i+1);
		}
		else
		{
			i++;
		}
	}//non zeros values are only in array
	// 1 2 1 
	for(i=size;i<size+zc;i++)
	{
		arr[i]=0;
	}
}
int main()
{
	int i,size,arr[100];
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	move_zeros(arr,size);//fun call
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}




/*
6
1 0 2 0 0 1

1 2 1 0 0 0
*/













