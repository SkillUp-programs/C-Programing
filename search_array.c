#include<stdio.h>
int search_array(int *arr,int size,int key)
//10 20 40 43 23;100
{
	int i;
	for(i=0;i<size;i++)
	{
		//arr[i] --> //10 20 40 43 23
		if(arr[i]==key)
		{
			return i+1;//position
		}
	}
	return 0;
	
}
int main()
{
	int res,i,size,arr[100],key;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);//search ele
	res=search_array(arr,size,key);// fun call/ 
	if(res)
	{
		printf("position:%d",res);
	}
	else
	{
		printf("Element not found");
	}
	return 0;
}


// 5
//  10 20 40 43 23
// key= 10

// 1
