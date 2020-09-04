#include<stdio.h>
void insert_array(int *arr,int *size,int pos,int val)
//5; 1 2 3 4 5;3;100
{
	int i;
	if(pos<*size)//position<size of array then only we are inserting
	{
	
		for(i=*(size)-1;i+1>=pos;i--)
		{
			//printf("%d %d\n",i,arr[i]);
			arr[i+1]=arr[i];
		}
		arr[pos-1]=val;
		*size+=1;
	}
}
int main()
{
	int i,size,arr[100],pos,val;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&pos,&val);
	insert_array(arr,&size,pos,val);//
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
// 5
// 1 2 3 4 5
// 2  100


//1 100 2 3 4 5


