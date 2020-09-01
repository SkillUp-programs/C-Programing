#include<stdio.h>
#include"arrays.h"

int main()
{
	int size,arr[100],i,min;// 
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=find_min(arr,size);//fun call
	printf("%d",min);
	return 0;
}

/*
sample input:
5
4 3 5 2 6
sample output:
2
*/
