#include<stdio.h>
//5
//10 20 40 50 50
//3
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
int main()
{
	int i,size,arr[100],pos;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&pos);
	delete_array(arr,&size,pos);//fun call
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}//
	return 0;
}



//5
//1 2 3 4 5
// 3

//1 2 4 5








