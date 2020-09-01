#include<stdio.h>
#include"arrays.h"

int main()
{
	int size,arr[100],i,max;// 
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=find_max(arr,size);//fun call
	printf("%d",max);
	return 0;
}

/*
sample input:
5
4 3 5 2 6
sample output:
2
*/
